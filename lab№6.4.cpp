#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  x;
	cout << "x=";
	cin >> x;
	cout << "y=" << 3 * pow (x, 6) - 6 * pow(x, 2) - 7;
}
