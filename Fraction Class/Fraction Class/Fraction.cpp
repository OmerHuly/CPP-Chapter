#include "stdafx.h"
#include <iostream>
#include "Fraction.h"

Fraction::Fraction()	//default c'tor
{
	m_numerator = 0;
	m_denominator = 1;
}

Fraction::Fraction(int numerator, int denominator)	//user defined c'tor
{
	m_numerator = numerator;
	m_denominator = denominator;
}

Fraction::Fraction(int num) //convert int to fraction type c'tor
{
	m_numerator = num;
	m_denominator = 1;
}

void Fraction::setFraction(int numerator, int denominator)
{
	m_numerator = numerator;	//set numerator
	m_denominator = denominator;	//set denominator
}

void Fraction::print()
{
	std::cout << m_numerator << "/" << m_denominator;	//print fraction
}

void Fraction::println()
{
	std::cout << m_numerator << "/" << m_denominator << std::endl;	//print fraction and new line
}

Fraction Fraction::operator+ (const Fraction& operand) const	//operator + overloading (a/b + c/d)
{
	int numerator = m_numerator;	//a
	int denominator = m_denominator;	//b
	numerator *= operand.getDenominator();	//a*d
	numerator += operand.getNumerator() * m_denominator;	//a*d + c*b
	denominator *= operand.getDenominator();	//b*d
	return (Fraction(numerator, denominator));
}

Fraction Fraction::operator- (const Fraction& operand) const	//operator - overloading (a/b - c/d)
{
	int numerator = m_numerator;	//a
	int denominator = m_denominator;	//b
	numerator *= operand.getDenominator();	//a*d
	numerator -= operand.getNumerator() * m_denominator;	//a*d - c*b
	denominator *= operand.getDenominator();	//b*d
	return (Fraction(numerator, denominator));
}

Fraction Fraction::operator* (const Fraction& operand) const	//operator * overloading (a/b * c/d)
{
	return (Fraction(m_numerator * operand.getNumerator(), m_denominator * operand.getDenominator()));
}

Fraction Fraction::operator/ (const Fraction& operand) const	//operator / overloading (a/b / c/d = a/b * d/c)
{
	return (Fraction(m_numerator * operand.getDenominator(), m_denominator * operand.getNumerator()));
}