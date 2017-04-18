#include <iostream>
#include <math.h> // sqrt -funktio
#include <string>
#include <sstream>

using namespace std;

//Alkuluvun tarkastaminen
int prime(long int x) {
	int j = sqrt(x);
	for (int i = 2; i <= j; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

//Euklideen algoritmi
int calcPrivateKey(int e, int z)
{
	int x[3], y[3];
	int a = e, b = z;
	int quotient = a / b;
	int remainder = a % b;

	x[0] = 0;
	y[0] = 1;
	x[1] = 1;
	y[1] = quotient * -1;

	int i = 2;
	for (; ( b% (a%b)) != ; i++
}