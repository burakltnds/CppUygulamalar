#include <iostream>
using namespace std;

template <class T>                                                                                                                                     
T buyuk(T data1, T data2) {
	if (data1 > data2) {
		return data1;
	}
	else if (data2 > data1) {
		return data2;
	}
	
}
int main()
{
	double data1,data2;
	int data3, data4;
	string data5, data6;
	char data7, data8;
	int secim;
	do {
		cout << "1-Double\n2-Int\n3-String\n4-Char\n5-Cikis Yap" << endl;
		cin >> secim;
		switch (secim) {
		case 1:
			cout << "Ilk Veriyi Giriniz:" << endl;
			cin >> data1;
			cout << "Ikinci Veriyi Giriniz" << endl;
			cin >> data2;
			cout << "Buyuk Olan Veri(Double) ->" << buyuk(data1, data2) << endl;
			cout << "**********" << endl;
			break;
		case 2:
			cout << "Ilk Veriyi Giriniz:" << endl;
			cin >> data3;
			cout << "Ikinci Veriyi Giriniz" << endl;
			cin >> data4;
			cout << "Buyuk Olan Veri(int) ->" << buyuk(data3, data4) << endl;
			cout << "**********" << endl;
			break;
		case 3:
			cout << "Ilk Veriyi Giriniz:" << endl;
			cin >> data5;
			cout << "Ikinci Veriyi Giriniz" << endl;
			cin >> data6;
			cout << "Buyuk Olan Veri(string) ->" << buyuk(data5, data6) << endl;
			cout << "**********" << endl;
			break;
		case 4:
			cout << "Ilk Veriyi Giriniz:" << endl;
			cin >> data7;
			cout << "Ikinci Veriyi Giriniz" << endl;
			cin >> data8;
			cout << "Buyuk Olan Veri(char) ->" << buyuk(data7, data8) << endl;
			cout << "**********" << endl;
			break;
		default:
			if (secim != 5) cout << "Yanlis Bir Secim Yaptiniz Tekrar Deneyiniz\n**********" << endl;
			
		}
	} while (secim != 5);

}
