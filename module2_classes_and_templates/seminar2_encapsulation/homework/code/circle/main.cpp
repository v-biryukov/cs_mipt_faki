#include <iostream>
#include "point.hpp"
using std::cout, std::endl;

class Circle
{
private:
	Point center;
	float radius;

public:


};

int main()
{
	Point p = {7, -1};
	Point q = {-4, 2};
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "p + q = " << p + q << endl;

/*
	Circle a({4, 1}, 3);
	Circle b;

	cout << "Circle a: center: " << a.getCenter() << " radius: " << a.getRadius() << endl; 
	cout << "Circle b: center: " << b.getCenter() << " radius: " << b.getRadius() << endl;

	cout << "Area of a = " << a.area() << endl;
	cout << "Distance from point p to circle a = " << a.distance(p) << endl;


	cout << "Collisions:" << endl;
	if (a.isColliding(b))
		cout << "Yes, a is colliding b" << endl;
	else
		cout << "No, a isn't colliding b" << endl;


	cout << "Moving b by {1, 1}:" << endl;
	b.move({1, 1});
	if (a.isColliding(b))
		cout << "Yes, a is colliding b" << endl;
	else
		cout << "No, a isn't colliding b" << endl;
*/
}