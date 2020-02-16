#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 1251>nul");
	const double a = 0.621371;
	double b, c;
	cout << "Укажите расстояние в километрах: ";
	cin >> b;
	c = a * b;
	cout << "Расстояние в милях: " << c << endl;
	system("pause>nul");
	return 0;
}