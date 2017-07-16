/**
* @file <HW2-SashaMorgan>
* <This program allows users to input data into the system and results into an output that corralates to the information given.
*
* @author <Sasha Morgan, sasha97> (your VT PID)
* @date   <September 3rd, 2015>
*
* Virginia Tech Honor Code Pledge
* On my honor:
*
* - I have not discussed the C++ language code in my program with
* anyone other than my instructor or the teaching assistants
* assigned to this course.
* - I have not used C++ language code obtained from another student,
* or any other unauthorized source, either modified or unmodified.
* - If any C++ language code or documentation used in my program
* was obtained from another source, such as a text book of coarse
* notes, that has been clearly noted with a proper citation in
* the comments of my program.
* - I have not designed this program in such a way as to defeat or
* interfere with the normal operation of the Web-Cat Server.
*
* <Sasha Morgan>
*/
#define _USE_MATH_DEFINES	//	Will allow the input of M_PI to equal PI
#include <cmath>



#include<iostream>
using namespace std;

//Beginnning of the main string
int main()
{
	//Declaration of the variables radius, width, and length that will be used in later calcualtions
	double radius;
	double width;
	double length;

	//This set of code will show readers what values to enter into the program, for instance they will enter to radius on the radius line.
	cout << "Please enter the radius of a circle: ";
	cin >> radius;
	cout << "Please enter the width of a rectangle: ";
	cin >> width;
	cout << "Please enter the length of a rectangle: ";
	cin >> length;
	cout << "" << endl;
	//Declaration of the variables for the areas of a circle and rectanagle, as well as the total area of the two combined.
	double circlearea;
	circlearea = M_PI * pow(radius,2);
	double	rectanglearea;
	rectanglearea = length * width;
	double	totalarea;
	totalarea = circlearea + rectanglearea;

	//Displays the areas of a circle and rectangle as well as the total area of the two combined.	
	cout << "The area of the circle is " << circlearea << "." << endl;
	cout << "The area of the rectangle is " << rectanglearea << "." << endl;
	cout << "The combined area is " << totalarea << "." << endl;
	//Declaration of the variables for the circumference, diagonal, and the difference of th circumference and the diagonal.
	double circumference;
	double diagonal;
	double difference;

	//Calculations for the circumference, diagonal, and the difference.
	circumference = 2 * M_PI * radius;
	diagonal = sqrt(pow(length, 2) + pow(width, 2));
	difference = circumference - diagonal;
//Displaying the circumeference, diagonal, and the difference.
	cout << "The circumference of the circle is " << circumference << "." << endl;
	cout << "The diagonal length of the rectange is " << diagonal << "." << endl;
	cout << "The difference between the two is " << difference << "." << endl;


	return 0;
}