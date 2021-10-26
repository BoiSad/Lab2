#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	cout << "ZADANIE 5 " << endl;
	cout << "kalkulator" << endl;
	int operacja;
	int cyfra1, cyfra2,reszta;
	cout << "Podaj liczbe: ", cin >> cyfra1;
	cout << "Podaj druga: ", cin >> cyfra2;
	cout << "\n=========================\2" << endl;
	cout << "Operacja : 1.Dodawanie , 2.Odejmowanie, 3.Mnozenie,  4.Dzielenie" << endl;
	cout << "Wybierz dzialanie: ", cin >> operacja;
	switch (operacja) {
	case 1:
		cout << "Suma: " << cyfra1 << " + " << cyfra2 << " = " << cyfra1 + cyfra2 << endl;
		break;
	case 2:
		cout << "Roznica  " << cyfra1 << " - " << cyfra2 << " = " << cyfra1 - cyfra2 << endl;
		break;
	case 3:
		cout << "Iloczyn:  " << cyfra1 << " * " << cyfra2 << " = " << cyfra1 * cyfra2 << endl;
		break;
	case 4:
		cout << "Iloraz:  " << cyfra1 << " / " << cyfra2 << " = " << cyfra1 / cyfra2 << endl;
		reszta = cyfra1 % cyfra2;
		cout << "reszta z dzielenia: " << reszta;
		break;
	default:
		cout << "Nie ma takiej opcji/n";
		break;
	}
}
