#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  x;
	cout << "x=";
	cin >> x;
	cout << "y=" << 4 * pow ((x-3), 6) - 7 * pow((x - 3), 3) + 2;
}
