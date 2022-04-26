#include "Rational.h"
using namespace std;

int main()
{
	Rational r = { 3, 4 };
	cout << r << endl;
	Pair p = { 4, 22 };
	cout << p << endl;

	cout << r / p << endl;
	cout << Object::Count() << endl;

	return 0;
}