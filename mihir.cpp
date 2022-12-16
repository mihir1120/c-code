// program to calculate area of circle


#include<iostream>

// using name space is to define the seperation of same class

using namespace std;

// forumla for area of circle pi*r*r
// formula for circumference of a circle 2*pi*r

int main()
{
	float radius, circumference;
	cout << "Enter radius of circle\n";
	cin >> radius;
	//cirumference = 2*pi*r formula to declare the value 
	circumference = 2*PI*radius;
    cout << "Circumference of circle : " 
	<< circumference;
      
    return 0;
}
	 	
	
	

