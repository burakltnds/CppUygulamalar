#include <iostream>
using namespace std;

void positive(int x, int y) {
	try
	{
		if (x<0 || y < 0) throw 1;
		else cout << "Toplam:" <<x + y<<endl;
	}
	catch (...) {
		cout << "Toplama Hatasi" << endl;
	}
}

//bolme işlemi için
void bolme(int x,int y){
	try {
		if (y == 0) throw 1;
		else 
			cout<< x / y <<endl;
	}
	catch (int z) {
		if (z == 1) {
			cout << "Bolme Hatasi Yaptiniz!!!" << endl;
		}
	}
}

//Giriş yapmak için
void giris(string usrName,string password) {
	try {
		if (usrName != "root" && password != "1a1b") throw 1;
		else if (usrName == "root" && password != "1a1b") throw 2;
		else if (usrName != "root" && password == "1a1b") throw 3;
		else cout << "Basariyla Giris Yapildi";
	}
	catch (int x) {
		if (x == 1) {
			cout << "Yanlis Sifre ve Kullanici Adi" << endl;
		}else if (x == 2) {
			cout << "Yanlis Sifre" << endl;
		}else if (x == 3) {
			cout << "Yanlis Kullanici Adi" << endl;
		}

	}
}


int main()
{	//ilk try catch(bölme)
	cout << "***********Ilk Hata Ayiklama***************\n" << endl;
	bolme(20, 0);
	cout << "\n***********Ikinci Hata Ayiklama************\n" << endl;
	giris(" ", " ");
	giris("root", " ");
	giris(" ", "1a1b");
	giris("root", "1a1b");
	cout << "\n\n**********Ucuncu Hata Ayiklama************\n" << endl;
	positive(-5, 5);
	positive(12, -25);
	positive(-5,-25);
	positive(5, 2);
}
