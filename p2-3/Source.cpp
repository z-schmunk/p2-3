/*
* FIle:		
* Author:   Zac Schmunk
* Date:		9/5/2024
*
*Description:
*/
#include <iostream>
#include<string>
#include <iomanip>
using namespace std;
int main(void) {
	double lenInM;
	double lenInIn;
	double lenInFt;
	double lenInMi;
	string user_name;
	cout << "Hello, my name is Hal." << endl;
	// prompt user for meter length
	cout << "Enter length in meters" << endl;
	cin >> lenInM;
	cout << endl;
	//convert the length to inches
	lenInIn = 39.3701 * lenInM;
	//convert the length to feet
	lenInFt = 3.28084 * lenInM;
	//convert the length to miles
	lenInMi = (1 / 1609.34) * lenInM;
	//display calculated temperature
	cout << lenInM << " Length M equals " << fixed << setprecision(1) << lenInIn << " inches." << endl;
	cout << lenInM << " Length M equals " << fixed << setprecision(2) << lenInFt << " Feet." << endl;
	cout << lenInM << " Length M equals " << fixed << setprecision(6) << lenInMi << " mile." << endl;
}