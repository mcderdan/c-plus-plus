# include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double a, b, c, x, d, x2;
	int decimal;
	cout << "ax^2 + bx + c = 0" << endl << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input c" << endl;
	cin >> c;
	cout << "How many decimal places?" << endl;
	cin >> decimal;
	if (a == 0)
	{
		x = (-c) / b;
		cout << "x = " << fixed<<setprecision(decimal)<< x << " or as a fraction, " << (-c) << "/" << b << endl;
		return 0;
	}
	else {
		if ((b*b) >= (4 * a*c)) {
			d = b * b - 4 * a*c;
			x = (-b + pow(d, 0.5)) / (2 * a);
			x2 = (-b - pow(d, 0.5)) / (2 * a);
			cout << "x = " << fixed << setprecision(decimal) << x << " and " << fixed << setprecision(decimal) << x2 << endl;
			return 0;
		}
	}
	cout << "No real solutions." << endl;
	return 0;
}