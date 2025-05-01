/*
    Для просмотра изображений в формате .ppm можно использовать irfanView
*/

#include "image.hpp"

int main()
{
    Image im(400, 400);

    im.drawCircle(100, 200, 200, {200, 100, 100});
    im.drawLine(100, 100, 200, 300, {255, 255, 0});
    im.drawLine(100, 100, 280, 300, {255, 255, 0});
    im.drawLine(100, 100, 360, 300, {255, 255, 0});

    im.savePpm("result1.ppm");


    Image im2("zlatoust1910.jpg");
    im2.drawCircle(50, 300, 100, {200, 100, 100});
    im2.drawLine(300, 100, 200, 300, {0, 255, 0});
    im2.drawLine(300, 100, 280, 300, {0, 255, 0});
    im2.drawLine(300, 100, 360, 300, {0, 255, 0});
    im2.save("result2.jpg");

}