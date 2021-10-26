#include <iostream>
using namespace std;
int main()
{
	float x, wynik1, wynik2, wynik3;

	cout <<"Podaj x: ";
	cin >> x;
	cout << "Podpunkt a: " << endl;

	if (x > 0) {
		cout << 2 * x << endl;
	}
	else if (x == 0) {
		cout << 0 << endl;
	}
	else if (x < 0) {
		cout << -3 * x << endl;
	}
	cout << "Podpunkt b: " << endl;
	if (x >= 0) {
		cout << x*x << endl;
	}
	else if (x < 1)
	{
		cout << x  << endl;
	}

	cout << "Podpunkt c: " << endl;
	if (x > 2) {
		cout << 2+x<<endl;
	}
	else if (x == 2) {
		cout << 8  << endl;
	}
	else if (x < 2) {
		cout << x-4 << endl;
	}
	







}

