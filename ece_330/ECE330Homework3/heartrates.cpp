/* Heartrates.cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "heartrates.h"

using namespace std;

HeartRates::HeartRates(const string &first, const string &last, int month, int day, int year)	//constructor
{
	yourFirstName = first;
	yourLastName = last;
	birthMonth = month;
	birthDay = day;
	birthYear = year;
}

void HeartRates::setFirstName (const string &first)		//set first name
{
	yourFirstName = first;
}

string HeartRates::getFirstName () const			//get first name
{
	return yourFirstName;
}

void HeartRates:: setLastName (const string &last)		//set last name
{
	yourLastName = last;
}

string HeartRates::getLastName () const			//get last name
{
	return yourLastName;
}

void  HeartRates::setBirthMonth (const int month)		//set month person was born
{
	birthMonth = month;
}

int HeartRates::getBirthMonth () const			//get month person was born
{
	return birthMonth;
}

void  HeartRates::setBirthDay (const int day)		//set day person was born
{
	birthDay = day;
}

int  HeartRates::getBirthDay () const			//get day person was born
{
	return birthDay;
}

void  HeartRates::setBirthYear (const int year)		//set year person was born
{
	birthYear = year;
}

int  HeartRates::getBirthYear () const			//get year person was born
{
	return birthYear;
}

int  HeartRates::getAge() const				//get age from birthdate
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

int HeartRates::getMaximumHeartRate() const		//get maximum heart rate from age
{
	int mr, a;
	a = getAge();
	mr = 220 - a;

	return mr;
}

void  HeartRates::getTargetHeartRate() const			//get target heart rate from maximum heart rate
{
	int mint, maxt, mr;

	mr = getMaximumHeartRate();
	mint = .5 * mint;
	maxt = .85 * maxt;

	cout << mint << " - " << maxt;
}
