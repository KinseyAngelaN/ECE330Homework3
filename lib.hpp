#include<iostream>
#include<cmath>

class Complex{
	private:
		double _real;
		double _imag;
	public:
		//Default constructor with no arguments
		Complex();
		//Default constructor with arguments
		Complex(double real, double imag);
		//Copy constructor

		//TODO: Cannot have a user defined datatype as a variable
		Complex(const Complex &/**/Complex/**/);
		~Complex();

		double getreal();
		double getimag();

		void print(Complex c1);
		
		//TODO: Complex:: is not needed here
		Complex Complex::add(Complex c2);
		Complex Complex::sub(Complex c2);			
		Complex Complex::mult(Complex c2);
		Complex Complex::div(Complex c2);
		Complex conj(Complex c1);
		Complex magnitude(Complex c1);
		Complex phase(Complex c1);

		Complex operator-(Complex comp);
		Complex operator+(Complex comp);
		Complex operator*(Complex comp);
		Complex operator/(Complex comp);
		Complex operator=(Complex comp);

		friend std::ostream& operator<<(std::ostream &out, const Complex &c);
		//TODO: should be >> not <<
		friend std::istream& operator<<(std::istream &in, Complex &c);
};
