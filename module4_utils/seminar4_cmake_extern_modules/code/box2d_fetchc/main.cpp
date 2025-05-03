#include <box2d/box2d.h>
#include <iostream>
#include <cstdlib>
#include <random>
#include "SFML/Graphics.hpp"

float getRandomFloat(float min, float max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_real_distribution<float> d(min, max);
    return d(gen);
}


b2BodyId generateRandomBox(b2WorldId worldId)
{
    b2BodyDef bodyDef = b2DefaultBodyDef();
    bodyDef.type = b2_dynamicBody;
    bodyDef.position = {getRandomFloat(-20, 20), getRandomFloat(10, 30)};
    b2BodyId bodyId = b2CreateBody(worldId, &bodyDef);
    
    b2Polygon dynamicBox = b2MakeBox(1.0f, 1.0f); // Размеры коробки 1x1
    b2ShapeDef shapeDef = b2DefaultShapeDef();
    shapeDef.density = 1.0f;
    shapeDef.friction = 0.3f;
    shapeDef.restitution = 0.5f;
    b2CreatePolygonShape(bodyId, &shapeDef, &dynamicBox);

    return bodyId;
}

void drawBox(sf::RenderWindow& window, b2BodyId bodyId)
{
    b2Transform transform = b2Body_GetTransform(bodyId);
    static sf::RectangleShape boxShape;
    boxShape.setSize({2.f, 2.f});
    boxShape.setOrigin({1.f, 1.f});
    boxShape.setFillColor(sf::Color::Red);
    boxShape.setPosition({transform.p.x, transform.p.y});
    boxShape.setRotation(180.0 / 3.14159 * b2Rot_GetAngle(transform.q));
    window.draw(boxShape);
}

int main() 
{
    // Создаем структуру с настройками мира
    b2WorldDef worldDef = b2DefaultWorldDef();
    worldDef.gravity = b2Vec2{0.0f, -9.8f}; // Гравитация
    
    // Создаем мир и получаем его ID
    b2WorldId worldId = b2CreateWorld(&worldDef);
    
    // Создаем землю (статическое тело)
    b2BodyDef groundBodyDef = b2DefaultBodyDef();
    groundBodyDef.position = {0.0f, -10.0f};
    b2BodyId groundBodyId = b2CreateBody(worldId, &groundBodyDef);

    b2Polygon groundBox = b2MakeBox(50.0f, 10.0f);
    b2ShapeDef groundShapeDef = b2DefaultShapeDef();
    b2CreatePolygonShape(groundBodyId, &groundShapeDef, &groundBox);

    
    // Создаем динамические тела (коробки)
    b2BodyId bodyId = generateRandomBox(worldId);

    std::vector<b2BodyId> bids;
    for (int i = 0; i < 70; ++i)
        bids.push_back(generateRandomBox(worldId));
    

    float timeStep = 1.0f / 60.0f;
    int32_t substeps = 8;

    sf::RenderWindow window {sf::VideoMode(800, 800), "Hello box2d"};
    window.setFramerateLimit(60);
    window.setView(sf::View{sf::FloatRect{50, 50, -100, -100}});

    sf::RectangleShape groundShape;
    groundShape.setSize({100.f, 20.f});
    groundShape.setOrigin({50.f, 10.f});
    groundShape.setPosition({groundBodyDef.position.x, groundBodyDef.position.y});
    groundShape.setFillColor(sf::Color::Blue);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                std::exit(1);
        }

        b2World_Step(worldId, timeStep, substeps);

        window.clear();
        window.draw(groundShape);
        for (auto id : bids)
            drawBox(window, id);

        window.display();
    }

    b2DestroyWorld(worldId);
}