/* Heartrates.cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "heartrates.h"

using namespace std;

HeartRates::HeartRates(const string &first, const string &last, int month, int day, int year, int pm, int pd, int py)	//constructor
{
	yourFirstName = first;
	yourLastName = last;
	birthMonth = month;
	birthDay = day;
	birthYear = year;
	presentMonth = pm;
	presentDay = pd;
	presentYear = py;
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

void  HeartRates::setPresentMonth (const int pm)		//set present month
{
	presentMonth = pm;
}

int HeartRates::getPresentMonth () const			//get present month
{
	return presentMonth;
}

void  HeartRates::setPresentDay (const int pd)		//set present day
{
	presentDay = pd;
}

int  HeartRates::getPresentDay () const			//get present day
{
	return presentDay;
}

void  HeartRates::setPresentYear (const int py)		//set present year
{
	presentYear = py;
}

int  HeartRates::getPresentYear () const			//get present year
{
	return presentYear;
}


int  HeartRates::getAge() const				//get age from birthdate
{
	int pm1, pd1, py1, bm, bd, by, cy;
	bm = getBirthMonth();
	bd = getBirthDay();
	by = getBirthYear();
	pm1 = getPresentMonth();
	pd1 = getPresentDay();
	py1 = getPresentYear();

	if (bd > pd1){
		pm1 = pm1 - 1;
	}
	if (bm > pm1){
		py1 = py1 - 1;
	}

	cy = py1 - by;

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
	mint = .5 * mr;
	maxt = .85 * mr;

	cout << mint << " - " << maxt << "\n";
}
