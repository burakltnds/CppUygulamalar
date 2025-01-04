#include <iostream>

using namespace std;

int main()

{
	string control;
	int x;
	cout << "enter your number:";
	cin >> x;

	control = (x % 2 == 0) ? "\nYour number is even number\n" : "\nYour number is odd number\n";
	cout << control;
	return 0;
}
