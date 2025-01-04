#include <iostream>

using namespace std;

int main() {
	
	string userN = "burakltnds";
	string passwordU = "Zb21";
	int sayac = 0;

	
	do {
		string username, password;
		cout << "Kullanici Adi:" << endl;
		cin >> username;
		cout << "Sifre:" << endl;
		cin >> password;
		sayac++;
		if (userN == username && passwordU == password) {
			cout << "Giris Basarili" << endl;
			break;
		}
		else if (userN != username && passwordU == password) {
			cout << "Kullanici Adi Bulunamadi Tekrar Deneyiniz!!!"<<endl;
		}
		else if (userN == username && passwordU != password) {
			cout << "Yanlis Sifre Tekrar Deneyiniz!!!!!"<<endl;
		}
		else {
			cout << "Kullanici Adi ve Sifre Uyumsuz Tekrar Deneyiniz"<<endl;
			
	}
	
		if (sayac == 3) {
			cout << "3 Hatali Deneme Yaptiniz Daha Sonra Tekrar Deneyiniz"<<endl;
			break;
	}
	
	} while (true);
	 



	return 0;
}

