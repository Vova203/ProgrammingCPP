#pragma once
#include <iostream>
#include <cmath>
#define pi 3.145926

class Complex
{
private:
	double Re; //вещественная часть числа
	double Im; //мнимая часть числа

public:
	Complex(double Re = 0, double Im = 0);
	Complex(const Complex& z);
	~Complex();

	void setRe(double Re);
	void setIm(double Im);
	double getRe();
	double getIm();
	void set(double Re, double Im);

	void print();
	double abs();
	double arg();
	void reverse();

	void operator= (const Complex& z);
	friend Complex operator+ (const Complex& z1, const Complex& z2);
	friend Complex operator+ (const Complex& z, const double term);
	friend Complex operator+ (const double term, const Complex& z);
	friend Complex operator* (const double mult, const Complex& z);
	friend Complex operator* (const Complex& z, const double mult);
	friend Complex operator* (const Complex& z1, const Complex& z2);
	friend Complex operator/ (const Complex& z, double denumerator);
	friend Complex operator/ (Complex& z1, Complex& z2);
	friend Complex operator/ (double denumerator, Complex& z);

};
