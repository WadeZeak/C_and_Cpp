#include<iostream>
#include<math.h>

using namespace std;

#define Pi 3.1415926

class Line;

class Point
{
public :

	friend class Line;//声明友元
	Point(int a, int b, int c) :x(a), y(b), z(c)
	{

	}

	void Show()
	{
		cout << "x=" << x << '\t';
		cout << "y=" << y << '\t';
		cout << "z=" << z << endl;
	}

private:
	int x;
	int y;
	int z;

};



class Line 
{
public:
	Point point1;//包含关系
	Point point2;

public:
	//调用重构
	Line(Point pointx, Point pointy) :point1(pointx), point2(pointy)
	{


	}

	double GetRadius()
	{
		double distance = 0;
		distance = sqrt(pow((double)(point1.x - point2.x), 2) + pow((double)(point1.z - point2.z), 2) + pow((point1.y - point2.y), 2));
		return distance/2;
	}


};




class Circle:public Line
{


public:
	Circle(Point point1, Point point2) : Line(point1,point2)
	{



	}

	double GetArea()
	{
		return Pi*pow(this->GetRadius(),2);

	}

	double GetCircumference()
	{

		return 2 * Pi*this->GetRadius();
	}

};



class Ball:public Circle
{

public:

	//初始化Circle
	Ball(Point point1, Point point2) :Circle(point1,point2)
	{


	}

	double GetVomule()
	{
		return 4 * Pi*this->GetRadius()*this->GetRadius();
	}

	double GetArea()
	{

		return 4 / 3 * Pi*pow(this->GetRadius(), 3);

	}
};










void main()
{

	Point point1(1, 2, 3), point2(3, 4, 5);

	point1.Show();
	point2.Show();

	Line line(point1, point2);
	cout <<"Radius= "<< line.GetRadius() << endl;

	Circle circle(point1, point2);

	cout <<" Circle_Area=" <<circle.GetArea() << endl;
	cout << "Circle_Circumference=" << circle.GetCircumference() << endl;

	Ball ball(point1,point2 );

	cout << "Ball_Area=" << ball.GetArea() << endl;
	cout << "Ball_Vomule=" << ball.GetVomule() << endl;


	cin.get();

}