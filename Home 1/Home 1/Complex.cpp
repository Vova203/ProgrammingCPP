#include "Complex.h"

Complex::Complex(double Re, double Im) : Re(Re), Im(Im) {}
Complex::Complex(const Complex& z) : Re(z.Re), Im(z.Im) {}
Complex::~Complex()
{
	this->Re = 0;
	this->Im = 0;
}

void Complex::setRe(double Re)
{
	this->Re = Re;
}

void Complex::setIm(double Im)
{
	this->Im = Im;
}

double Complex::getRe()
{
	return this->Re;
}

double Complex::getIm()
{
	return this->Im;
}

void Complex::set(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

void Complex::print()
{
	if (this->Re == 0)
	{
		if (this->Im == 1)
		{
			std::cout << "i" << std::endl;
		}
		else if (this->Im == -1)
		{
			std::cout << "-i" << std::endl;
		}
		else if (this->Im == 0)
		{
			std::cout << "0" << std::endl;
		}
		else
		{
			std::cout << this->Im << "i" << std::endl;
		}
	}
	else if (this->Im == 0)
	{
		std::cout << this->Re << std::endl;
	}
	else
	{
		if (this->Im == 1)
		{
			std::cout << this->Re << "+" << "i" << std::endl;
		}
		else if (this->Im == -1)
		{
			std::cout << this->Re << "-" << "i" << std::endl;
		}
		else if (this->Im < 0)
		{
			std::cout << this->Re << this->Im << "i" << std::endl;
		}
		else
		{
			std::cout << this->Re << "+" << this->Im << "i" << std::endl;
		}

	}

}

double Complex::abs()
{
	return sqrt((this->Re * this->Re + this->Im * this->Im));
}

double Complex::arg()
{
	if (this->abs() == 0)
	{
		return 0;
	}
	else if (this->Re = 0)
	{
		return pi/2;
	}
	return atan(this->Im / this->Re);
}

void Complex::reverse()
{
	return Complex(this->Re , this->Im * (-1)) / (this->Re * this->Re + this->Im * this->Im);
}

void Complex::operator=(const Complex& z)
{
	this->Re = z.Re;
	this->Im = z.Im;
}

Complex operator+(const Complex& z1, const Complex& z2)
{
	return Complex(z1.Re + z2.Re, z1.Im + z2.Im);
}

Complex operator+(const Complex& z, const double term)
{
	return Complex(z.Re + term, z.Im);
}

Complex operator+(const double term, const Complex& z)
{
	return Complex(z.Re + term, z.Im);
}

Complex operator*(const double mult, const Complex& z)
{
	return Complex(z.Re * mult, z.Im * mult);
}

Complex operator*(const Complex& z, const double mult)
{
	return Complex(z.Re * mult, z.Im * mult);
}

Complex operator*(const Complex& z1, const Complex& z2)
{
	return Complex(z1.Re * z2.Re - z1.Im * z2.Im, z1.Re * z2.Im + z1.Im * z2.Re);
}

Complex operator/(const Complex& z, double denumerator)
{
	return Complex(z.Re / denumerator, z.Im / denumerator);
}

Complex operator/(Complex& z1, Complex& z2)
{
	return Complex(z1 * z2.reverse());
}

Complex operator/(double denumerator, Complex& z)
{
	return Complex(denumerator * z.reverse());
}
