#include <iostream>
using namespace std;

//kopya ile yer değiştirme
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "Kopya Icinde Degerler:" << "x=" << x << " y=" << y << endl;
}
//Referans ile yer değiştirme 
void swap2(int &x,int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "Referans Icinde Degerler:" << "z=" << x << " t=" << y << endl;
}
//Pointer ile yer değiştirme 
void swap3(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout << "Pointer Icinde Degerler:" << "a=" << *x << " b=" << *y << endl;
}

int main()
{
	int x = 5, y = 10, z = 20, t = 40;
	int h = 50, m = 100;
	int* a = &h;
	int* b = &m;
	//Kopya
	cout << "Kopya Fonksiyon Oncesi degerler:" << "x="<<x<<" y="<<y << endl;
	swap(x, y);
	cout << "Kopya Fonksiyon Sonrasi degerler:" << "x=" << x << " y=" << y << endl;
	cout << "**********" << endl;
	//Referans
	cout << "Referans Fonksiyon Oncesi degerler:" << "z=" << z << " t=" << t << endl;
	swap2(z, t);
	cout << "Referans Fonksiyon Sonrasi degerler : " << "z=" << z << " t=" << t << endl;
	cout << "**********" << endl;
	//Pointer
	cout << "Pointer Fonksiyon Oncesi degerler:" << "a=" << h << " b=" << m << endl;
	swap3(a,b);
	cout << "Pointer Fonksiyon Sonrasi degerler:" << "a=" << h << " b=" << m << endl;
	return 0;

}