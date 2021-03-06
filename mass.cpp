/* 
* Description: A program that takes inputs to determine the mass of a second piston.
* 
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double mass1;
	double mass2;
	double radius1;
	double radius2;
	cout << "Enter the mass supported by the first piston (kg): " << endl;
	cin >> mass1;
	cout << "Enter the radius of the first piston (cm): " << endl;
	cin >> radius1;
	cout << "Enter the radius of the second piston (cm): " << endl;
	cin >> radius2;
	mass2 = ((pow(radius2, 2.0))/(pow(radius1, 2.0)))*mass1;
	cout << "The mass is " << mass2 << " kg" << endl;
	cin.ignore(2);
    return 0;
}

