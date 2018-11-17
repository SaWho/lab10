//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

#include <iostream>
using namespace std;
class Rectangle
{
public: 
double length;
double breadth;
Rectangle(double l,double b)	//defining a user defined constructor to take parameters length and breadth 
{
length=l;
breadth=b;
}
double area()
{
return (this->length)*(this->breadth);
}
double perimeter()
{
return 2*((this->length)+(this->breadth));
}
};

int main()
{
double l1,b1,l2,b2;
cout<<"Enter the length and breadth of the rectangle one"<<endl;	//user prompt
cin>>l1>>b1;								//input
cout<<"Enter the length and breadth of the rectangle two"<<endl;	//user prompt
cin>>l2>>b2;								//input
Rectangle r1(l1,b1);		//object creation
Rectangle r2(l2,b2);		//object creation	 
cout<<"The area of the rectangles are respectively :"<<r1.area()<<"  &  "<<r2.area()<<endl;
cout<<"The perimeter of the rectangles are respectively :"<<r1.perimeter()<<"  &  "<<r2.perimeter()<<endl;
return 0;


}
