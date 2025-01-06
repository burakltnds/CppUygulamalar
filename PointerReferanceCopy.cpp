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

//Referans + Const = Değeri Sadece fonksiyonun içinde değiştirecekseniz fakat daha hızlı erişim istiyorsanız kullanabilirsiniz
//x ve y ye atama yapamazsınız bu yüzded swap işlemi yapılamaz
void max(const int& x, const int& y) {
	if (x > y) { cout << x << " buyuktur " << y << endl; }
	else if (y > x) { cout << y << " buyuktur " << x << endl; }
	else { cout << "Esittir" << endl; }
}
//Const Değişken + Const Pointer
//Yukarıdaki yöntemle aynıdır değer fonksiyonun içinde değiştirilemez
void min1(const int*const x,const int*const y) {
	if (*x < *y) { cout << *x << " kucuktur " << *y << endl; }
	else if (*y < *x) { cout << *y << " kucuktur " << *x << endl; }
	else { cout << "Esittir" << endl; }
}

//Değişken + Const Pointer
//İşaret Ettiği Değer Değiştirilebilir,Değişken Değiştirilemez(Referans ile vs.)
//Örneğin Değeri Arttırabilirsin ama Başka Değişkene Eşitleyemezsin 
void arttir(int *const  x,int *const y){
	*x=*x+1;
	*y = *y + 1;
	cout << "Degerler:g=" << *x <<" i=" <<*y << endl;
}
//Const int *x
//işaret ettiği değer değişmez değişken değişebilir
void xDenklem(const int* x, const int* y) {
	int top= (((*x) * (*y)) *3) ;
	x = &top;
	cout <<"Denklem Icinde: j=" << *x << endl;
}

int main()
{
	int x = 5, y = 10;
	//Kopya
	cout << "Kopya Fonksiyon Oncesi degerler:" << "x="<<x<<" y="<<y << endl;
	swap(x, y);
	cout << "Kopya Fonksiyon Sonrasi degerler:" << "x=" << x << " y=" << y << endl;
	cout << "\n**********\n" << endl;
	//Referans
	int z = 20, t = 40;
	cout << "Referans Fonksiyon Oncesi degerler:" << "z=" << z << " t=" << t << endl;
	swap2(z, t);
	cout << "Referans Fonksiyon Sonrasi degerler : " << "z=" << z << " t=" << t << endl;
	cout << "\n**********\n" << endl;
	//Pointer
	int h = 50, m = 100;
	int* a = &h;
	int* b = &m;
	cout << "Pointer Fonksiyon Oncesi degerler:" << "a=" << h << " b=" << m << endl;
	swap3(a,b);
	cout << "Pointer Fonksiyon Sonrasi degerler:" << "a=" << h << " b=" << m << endl;
	cout << "\n**********\n" << endl;
	//Const+Referans
	int c = 150, d = 300;
	max(c, d);
	cout << "\n**********\n" << endl;
	//Const Değişken + Const Pointer
	int e = 55, f = 45;
	min1(&e, &f);
	cout << "\n**********\n" << endl;
	//Değişken + Const Pointer
	//Fonksiyon Sonrası Değerler Değişir
	int g = 4, i = 9;
	cout << "Arttirmadan Onceki Degerler:g=" << g << " i" << i<<endl;
	arttir(&g, &i);
	cout << "Arttirmadan Sonraki Degerler:g=" << g << " i" << i << endl;
	cout << "\n**********\n" << endl;
	//Const int *x
	int j = 10, k = 3;
	cout << "Fonksiyon Oncesi:j=" << j<< endl;
	xDenklem(&j,&k);
	cout << "Fonksiyon Sonrasi:j=" << j << endl;
	return 0;

}