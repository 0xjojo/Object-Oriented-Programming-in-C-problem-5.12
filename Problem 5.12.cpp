// Problem 5.12.cpp : Defines the entry point for the console application.
//
/*12. Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
fmul(), and fdiv(). Each of these functions should take two arguments of type struct
fraction, and return an argument of the same type.*/
#include "stdafx.h"
#include <iostream>
using namespace std;
struct frac{
	int numerator;
	int	denominator;
};
frac fadd(frac, frac);
frac fsub(frac, frac);
frac fmul(frac, frac);
frac fdiv(frac, frac);

int main()
{
	char dummy_slash;
	frac f1, f2, f3;
	cout << "Enter fist faction in format 5/3:" << endl;
	cin >> f1.numerator >> dummy_slash >> f1.denominator;
	cout << "Enter secound fraction in format 5/3:" << endl;
	cin >> f2.numerator >> dummy_slash >> f2.denominator;
	f3 = fadd(f1, f2);
	cout << "The sum is:" << f3.numerator << dummy_slash << f3.denominator << endl;
	f3 = fsub(f1, f2);
	cout << "The sub is:" << f3.numerator << dummy_slash << f3.denominator << endl;
	f3 = fmul(f1, f2);
	cout << "The mul is:" << f3.numerator << dummy_slash << f3.denominator << endl;
	f3 = fdiv(f1, f2);
	cout << "The div is:" << f3.numerator << dummy_slash << f3.denominator << endl;
	return 0;
}
frac fadd(frac f1, frac f2) {
	frac add;
	add.denominator = f1.denominator*f2.denominator;
	add.numerator = f1.denominator*f2.numerator + f2.denominator*f1.numerator;
		
	return add;
}
frac fsub(frac f1, frac f2){
	frac sub;
	sub.denominator = f1.denominator*f2.denominator;
	sub.numerator = f1.denominator*f2.numerator - f2.denominator*f1.numerator;
	return sub;
}
frac fmul(frac f1, frac f2) {
	frac mul;
	mul.denominator = f1.denominator*f2.denominator;
	mul.numerator = f1.numerator*f2.numerator;
	return mul;
}
frac fdiv(frac f1, frac f2) {
	frac div;
	div.numerator = f1.numerator*f2.denominator;
	div.denominator = f1.denominator*f2.numerator;
	return div;
}
