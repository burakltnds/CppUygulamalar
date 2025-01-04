#include <iostream>

using namespace std;

int main() {
	int first, second, third;
	do {
		cout << "Enter First Number:";
		cin >> first;
		cout << "\nEnter Second Number:";
		cin >> second;
		cout << "\nEnter Third Number:";
		cin >> third;
		if (first == second || first == third || third == second) {
			cout << "\nEqual Numbers Can't Be Entered\nPlease Again!!!\n";
		}
	} while (first==second || first==third || third==second);

	if (first > second && first > third) {
		cout << "\n" << first << " Largest Number";
	}
	else if (second > first && second > third) {
		cout << "\n" << second << " Largest Number";
	}
	else {
		cout << "\n" << third << " Largest Number";
	}

	return 0;
}