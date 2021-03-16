/* heartrates.h  */

#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <string>

using namespace std;

class HeartRates
{
	public:
		HeartRates(const string & = "", const string & = "", const int = 0, const int = 0,  const int = 0);	//constructor
		void setFirstName (const string &);		//set first name
		string getFirstName () const;			//get first name
		void setLastName (const string &);		//set last name
		string getLastName () const;			//get last name
		void setBirthMonth (const int);			//set month person was born
		int getBirthMonth () const;			//get month person was born
		void setBirthDay (const int);			//set day person was born
		int getBirthDay () const;			//get day person was born
		void setBirthYear (const int);			//set year person was born
		int getBirthYear () const;			//get year person was born
		int getAge() const;				//get age from birthdate
		int getMaximumHeartRate() const;		//get maximum heart rate from age
		void getTargetHeartRate() const;		//get target heart rate from maximum heart rate
	private:
		string yourFirstName;		//User first name
		string yourLastName;		//User last name
		int birthMonth;			//User birth month
		int birthDay;			//User birthday
		int birthYear;			//User birth year
};

#endif
