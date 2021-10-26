#include <iostream>
using namespace std;
int main()
{
	string a, b;
	cout << "Jest znizka? " << endl;
	cin >> a;
	cout << "Otrzymales podwyzke?" << endl;
	cin >> b;

	if (!(a == "tak") && b == "tak") {
		cout << "Mozesz kupic samochod, Znizki na samochod nie ma ";
	}
	else if (!(a == "tak") || !(b == "tak")) {
		cout << "Zakup trzeba odlozyc na pozniej..., Znizki na samochod nie ma";
	}
	else if (a == "tak" || b == "tak") {
		cout << "Mozesz kupic samochod!";
	}
	else
		cout << "Zla odpowiedz";

}
