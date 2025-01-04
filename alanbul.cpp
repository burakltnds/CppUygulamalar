#include <iostream>

using namespace std;

int main() {
	const double pi = 3.14;
	double r,perimeter,area;
	cout << "Enter Radius:";
	cin >> r;
	perimeter = 2 * pi*r;
    area = pi * r * r;
	cout << "Perimeter:" << perimeter<<endl;
	cout << "Area:" << area << endl;



	
}
