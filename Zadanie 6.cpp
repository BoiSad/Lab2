#include <iostream>
using namespace std;
int main()
{
	string a, b;
	cout << "pada deszcz? " << endl;
	cin >> a;
	cout << "jest autobus?" << endl;
	cin >> b;

	if (a == "tak" && b == "tak") {
		cout << "Wez parasol, Dostaniesz sie na uczelnie";
	}
	else if (a == "tak" && !(b == "tak")) {
		cout << "Nie dostaniesz sie na uczelnie";
	}
	else if (!(a == "tak") && b == "tak") {
		cout << "Dostaniesz sie na uczelnie, Milego dnia, Pieknej pogody";
	}
	else
		cout << "Zla odpowiedz";

}
