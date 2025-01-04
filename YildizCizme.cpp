#include <iostream>
using namespace std;


int main()
{
	int gir;
	
	cout << "Sayi Gir";
	cin >> gir;

	for (int i = 1; i < gir; i++) {

		for (int j =0; j < i; j++) {
			cout << "*";

		}
		cout << endl;
	}


	for (int i = 0; i <=gir ;i++) {
	
		for (int j = gir-1; j >= i;j-- ) {
			cout << "*";

		}
		cout << endl;
	}


}
