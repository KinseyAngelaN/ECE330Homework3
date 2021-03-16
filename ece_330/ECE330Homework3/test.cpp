/* File: test.cpp */

#include <iostream>
#include <string>
#include "heartrates.h"

using namespace std;

int main()
{
	string first, last;
	int month, day, year, pm, pd, py;
	cout << "Enter your first and last name: \n";
	cin >> first >> last;
	cout << "Enter your birthdate in the form of mm dd yyyy: \n";
	cin >> month >> day >> year;
	cout << "Enter the present date in the form of mm dd yyyy: \n";
	cin >> pm >> pd >> py;
	HeartRates h1(first, last, month, day, year, pm, pd, py);
	cout << "Your name: " <<  h1.getFirstName() << h1.getLastName() << "\n";
	int a = h1.getAge(); 
	cout << "Your age: " << a << "\n";
	cout << "Your maximum heartrate: " << h1.getMaximumHeartRate() << "\n";
	cout << "Your target heartrate: ";
	h1.getTargetHeartRate();
}
