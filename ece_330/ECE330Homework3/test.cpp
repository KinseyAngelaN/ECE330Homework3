/* File: test.cpp */

#include <iostream>
#include <string>
#include "heartrates.h"

using namespace std;

int main()
{
	string first, last;
	int month, day, year;
	cout << "Enter your first and last name: \n";
	cin >> first >> last;
	cout << "Enter your birthdate in the form of mm dd yyyy: \n";
	cin >> month >> day >> year;
	HeartRates h1(first, last, month, day, year);
	int f = h1.getFirstName();
	int l = h1.getLastName();
	cout << "Your name: " << f << l << "\n";
	int a = h1.getAge(); 
	cout << "Your age: " << a << "\n";
	int max = h1.getMaximumHeartRate(a);
	cout << "Your maximum heartrate: " << max << "\n";
	t = h1.getTargetHeartRate();
	cout << "Your target heartrate: " << t << "\n";
}
