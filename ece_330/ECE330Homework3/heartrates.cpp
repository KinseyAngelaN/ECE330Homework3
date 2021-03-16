/* Heartrates.cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "heartrates.h"

using namespace std;

HeartRates::HeartRates(const string &first, const string &last, int month, int = day, int = year)	//constructor
{
	yourFirstName = first;
	yourLastName = last;
	birthMonth = month;
	birthDay = day;
	birthYear = year;
}

void setFirstName (const string &first)		//set first name
{
	yourFirstName = first;
}

string getFirstName () const			//get first name
{
	return yourFirstName;
}

void setLastName (const string &last)		//set last name
{
	yourLastName = last;
}

string getLastName () const			//get last name
{
	return yourLastName;
}

void setBirthMonth (const int month)		//set month person was born
{
	birthMonth = month;
}

int getBirthMonth () const			//get month person was born
{
	return birthMonth;
}

void setBirthDay (const int day)		//set day person was born
{
	birthDay = day;
}

int getBirthDay () const			//get day person was born
{
	return birthDay;
}

void setBirthYear (const int year)		//set year person was born
{
	birthYear = year;
}

int getBirthYear () const			//get year person was born
{
	return birthYear;
}

int getAge() const				//get age from birthdate
{
	int pm, pd, py, bm, bd, by, cy;
	bm = getBirthMonth();
	bd = getBirthDay();
	by = getBirthYear();
	cout << "Enter present date in the format mm dd yyyy: ";
	cin >> pm >> pd >> py;


	if (bd > pd){
		pm = pm - 1;
	}
	if (bm > pm){
		py = py - 1;
	}

	cy = py - by;

	return cy;
}

int getMaximumHeartRate() const		//get maximum heart rate from age
{
	int mr, a;
	a = getAge();
	mr = 220 - a;

	return mr;
}

void getTargetHeartRate() const			//get target heart rate from maximum heart rate
{
	int mint, maxt, mr;

	mr = getMaximumHeartRate();
	mint = .5 * mint;
	maxt = .85 * maxt;

	cout << mint << " - " << maxt;
}
