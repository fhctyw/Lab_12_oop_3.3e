// Rational.h
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

class Rational : public Pair
{
public:
	Rational(int a = 0, int b = 0) : Pair(a, b) {};
	Rational(const Pair& p);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	Pair getPair() const { return *this; }
	void setPair(Pair p) { *this = p; }



	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	friend Rational operator+(const Rational& r1, const Rational& r2);
	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend Rational operator-(const Rational& r1, const Rational& r2);
};
