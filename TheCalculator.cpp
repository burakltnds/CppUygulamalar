#include <iostream>

using namespace std;

//toplama
int sum(int x, int y) {
    return x + y;
}

//çıkarma
int sub(int x, int y) {
    if (x > y) {
        return x - y;
    }
    else {
        return y - x;
    }
    //retrun 0;
}
//bölme
double div(double x, double y) {
    return x / y;
}
//çarpma
int multi(int x, int y) {
    return x * y;
}

int main()
{
    double first, second;
    cout << "Enter First Number:";
    cin >> first;
    cout << "\nEnter Second Number:";
    cin >> second;

    cout << "\nAddition:" << sum(first, second);
    cout << "\nSubstract:" << sub(first, second);
    cout << "\nDivision:" << div(first, second);
    cout << "\nMultiplication:" << multi(first, second);


}
