#include <iostream>
#include <string>

using namespace std;

class Shape
{
private:
    double area;
public:
    Shape(string s, double a, double b);
    double GetArea() const {return area;}
    virtual void showArea() const = 0;
};

Shape::Shape(string s, double a, double b)
{
    if (s == "rectangle") area = a * b;
    else if (s == "square") area = a * b;
    else if (s == "triangle") area = a * b * 0.5;
    else if (s == "circle") area = a * b * 3.141592;
    else exit(1);
}


class Rectangle : public Shape
{
public:
    Rectangle(string s, double width, double height);
    virtual void showArea() const override;
};

Rectangle::Rectangle(string s, double width, double height)
    : Shape(s, width, height)
{ }
void Rectangle::showArea() const
{
    cout << "Area of rectangle : " << GetArea() << endl;
}


class Square : public Rectangle
{
public:
    Square(string s, double side);
    virtual void showArea() const override;
};

Square::Square(string s, double side)
        : Rectangle(s, side, side)
{ }
void Square::showArea() const
{
    cout << "Area of square : " << GetArea() << endl;
}


class Triangle : public Shape
{
public:
    Triangle(string s, double base, double height);
    virtual void showArea() const override;
};

Triangle::Triangle(string s, double base, double height)
    : Shape(s, base, height)
{ }
void Triangle::showArea() const
{
    cout << "Area of triangle : " << GetArea() << endl;
}


class Circle : public Shape
{
public:
    Circle(string s, double radius);
    virtual void showArea() const override;
};

Circle::Circle(string s, double radius)
    : Shape(s, radius, radius)
{ }
void Circle::showArea() const
{
    cout << "Area of circle : " << GetArea() << endl;
}



int main(void)
{
    double a, b;
    string s;
    cin >> s;

    if (s == "rectangle")
    {
        cin >> a >> b;
        Rectangle rect(s, a, b);
        rect.showArea();
    }
    else if (s == "square")
    {
        cin >> a;
        Square sqr(s, a);
        sqr.showArea();
    }
    else if (s == "triangle")
    {
        cin >> a >> b;
        Triangle triangle(s, a, b);
        triangle.showArea();
    }
    else if (s == "circle")
    {
        cin >> a;
        Circle circle(s, a);
        circle.showArea();
    }
    else
        cout << "input doesnt matches with required shpae" << endl;
    return 0;
}