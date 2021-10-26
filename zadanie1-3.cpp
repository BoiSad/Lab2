#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	float x;
	float a, b;
	cout << "Podaj a = ";
	cin >> a;
	cout << "Podaj b = ";
	cin >> b;

	if (a == 0) {
		 if (b == 0) {
			cout << "tozsamosciowe" <<endl;
		}
		else {
			 cout << "sprzeczne" << endl;
		}
	}

	else {
		x = -b / a;
		cout << "x = " << x <<endl;
	}
	  
	cout << " ZADANIE 2 " <<endl;

	double l1, l2, l3, x1, x2, x0, delta;
	cout << "Podaj a : ";
	cin >> l1;
	cout << "Podaj b : ";
	cin >> l2;
	cout << "Podaj c : ";
	cin >> l3;

	delta = l2 * l2 - 4 * l1 * l3;
	if (delta < 0) { cout << "Nie ma pierwiastków"; }
	else if (delta > 0)
	{
		delta = sqrt(delta);
		x1 = (-l2 - delta) / (2 * l1);
		x2 = (-l2 + delta) / (2 * l2);
		cout << " Pierwsze miejsce zerowe: " << x1 << endl;
		cout << " Drugie miejsce zerowe: " << x2 << endl;
	}
	else
		if (delta == 0)
		{
			x0 = -b / (2 * a);
			cout << "Jest jeden pierwiastek: " << x0;
		}
		else
			cout << "Brak pierwiastkow";

	}




