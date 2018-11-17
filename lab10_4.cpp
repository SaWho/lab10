#include <iostream>
using namespace std;
// ********************************************************************
// Declaration of class Point
// ********************************************************************
// class Point represents a two-dimensional point
class Point
{
public:
// default class constructor (with no arguments):
Point();
// class constructor that sets the coordinates x, y to the values xval,
// yval:
Point(int xval, int yval);
// member function for moving a point by dx, dy:
void Move(int dx, int dy);
// member functions for getting values of x, y:
int Get_X() const;
int Get_Y() const;
// member functions for setting x, y to xval, yval respectively
void Set_X(int xval);
void Set_Y(int yval);
//Lab 7 exercise 4.1. Add declaration of member function Print here:
void print(void);
// private data members x, y represent coordinates of the point:
private:
int X;
int Y;
};
// ********************************************************************
// Methods for class Point
// ********************************************************************
// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{X = 0;
Y = 0;
}
// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
X = xval;
Y = yval;
}
// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
X += dx;
Y += dy;
}
// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
return X;
}
// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
return Y;
}
// Set_X sets the value of X coordinate to xval

void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:



void Point::print(void)
{
cout<<"(x,y)=("<<this->Get_X()<<","<<this->Get_Y()<<")"<<endl;
}
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle
{
public:
Rectangle(Point p1, Point p2)
{
X3.Set_X(p1.Get_X());
X3.Set_Y(p1.Get_Y());
X2.Set_X(p2.Get_X());
X2.Set_Y(p2.Get_Y());
X1.Set_X(X3.Get_X());
X1.Set_Y(X2.Get_Y());
X4.Set_X(X2.Get_X());
X4.Set_Y(X3.Get_Y());
}
Rectangle()
{
X1.Set_X(0);
X1.Set_Y(1);
X2.Set_X(1);
X2.Set_Y(1);
X3.Set_X(0);
X3.Set_Y(0);
X4.Set_X(1);
X4.Set_Y(0);
}
void print(void){
X1.print();
X2.print();
X3.print();
X4.print();
}
private:
Point X1;
Point X2;
Point X3;
Point X4;




void Other(void);
double Side1(void){
return X2.Get_X()-X1.Get_X();
}
double Side2(void){
return X1.Get_Y()-X3.Get_Y();
}
public:
double Area(void){
return (this->Side2())*(this->Side1());
}
};
// ********************************************************************
//  Methods for class Rectangle



// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
 p1.print();
 p2.print();
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
 Rectangle K(p1,p2);
 K.print();
cout<<"The area of the rectangle is "<< K.Area()<<endl;
  return 0;
}


