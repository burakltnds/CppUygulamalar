#include <iostream>

using namespace std;

int main()
{
    int num;
    do {
        cout << "Enter your number:";
        cin >> num;

        if (num > 0 && num % 2 == 0) {
            cout << "\nPositive and Even Number\n\n";
        }
        else if (num > 0 && num % 2 == 1) {
            cout << "\nPositive and Odd Number\n\n";
        }
        else if (num < 0 && num % 2 == 0) {
            cout << "\nNegative and Even Number\n\n";
        }
        else {
            cout << "\nNegative and Odd Number\n\n";
        }
    } while (true);




    
    return 0;
}

