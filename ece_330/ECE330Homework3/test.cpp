/* File: test.cpp */

#include <iostream>
#include <string>
#include "heartrates.h"

using namespace std;

int main()
{
	cout << "Enter your first and last name: \n";
	cin >> first >> last;
	cout << "Enter your birthdate in the form of mm dd yyyy: \n";
	cin >> month >> day >> year;
	HeartRates(first, last, month, day, year);
	cout << "Your name: " << getFirstName() << getLastName() << "\n";
	cout << "Your age: " << getAge() << "\n";
	cout << "Your maximum heartrate: " << getMaximumHeartRate() << "\n";
	cout << "Your target heartrate: " << getTargetHeartRate() << "\n";
}
