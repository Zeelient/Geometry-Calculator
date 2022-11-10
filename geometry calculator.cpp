#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;


// Menu Driven - Chapter 4, Programming Challenge 23: Geometry Calculator
// 
// Name:
// Date:
//
#include <iostream>
using namespace std;

// Prototypes
// YOUR CODE HERE
void displayMenu();
void areaCircle(float);
void areaRectangle(float);
void areaTriangle(float);

int main()
{	

	 const int area_Of_Circle = 1,
	 area_Of_Rectangle = 2,
     area_Of_Triangle = 3,
     quit = 4;
	 const float pi= 3.14159;
float area;

   int r,b,h,l,w;


	int choice;


do {

  displayMenu();
  cout << "Choose an option:";
  cin >> choice;
 

while (choice < area_Of_Circle || choice > quit)
{
	 cout << "The valid choices are 1 through 4.\n";
   cout << "Program ending"<< endl;
	cin >> choice;
}

if (choice != quit || choice != area_Of_Circle || choice !=area_Of_Rectangle || choice !=area_Of_Triangle)
{


switch (choice)
{

case area_Of_Circle:


cout <<"Please enter the radius of a circle:\n";
cout <<"Radius:";
cin >> r;
if(r >= 0)
{
    area = pi*pow(r,2);
    areaCircle(area);
}
  else{ 
    cout <<"The radius cannot be less than zero.\n";
    cout << "Program ending"<< endl;

  }

break;

case area_Of_Rectangle:

cout <<"Please enter the width and length of a rectangle:\n\n";
cout <<"Width:";
cin >> w;
cout <<"Length:";
cin >> l;
if(w >= 0 && l >= 0)
{
  area= l * w;
 areaRectangle(area);
}

  else{ 
    cout <<"Only enter positive values for length and width.\n";
    cout << "Program ending"<< endl;

  }

break;

case area_Of_Triangle:

cout<<"Please enter the base and height of a triangle:\n";
cout <<"Base Length:";
cin >> b;
cout <<"Height:";
cin >> h;
if(h >= 0 && b >= 0)
{
  area = b*h*.5;
    areaTriangle(area);
}
else {
    cout <<"Only enter positive values for base and height.\n";
    cout << "Program ending"<< endl;
}
break;
}
} 
}
while (choice!=4);
cout << "Program ending"<< endl;
return 0;
}

 void displayMenu()
{
 
 cout << "Geometry Calculator\n" << endl;
cout << "1. Calculate the Area of a Circle\n" << endl;
cout << "2. Calculate the Area of a Rectangle\n" << endl;
cout << "3. Calculate the Area of a Triangle\n" << endl;
cout << "4. Quit\n" << endl;
 


}

void areaCircle (float area)
{
 

cout <<"The area is "<< area << endl;
cout << "Program ending"<< endl;
 
}

void areaRectangle(float area)
{
 
cout <<"The area is "<< area << endl;
cout << "Program ending"<< endl;
 
}

void areaTriangle(float area)
{
 
cout <<"The area is "<< area << endl;
cout << "Program ending"<< endl;
 
}
