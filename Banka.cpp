#include <iostream>

using namespace std;

int main()
{

    int money = 100;
    do {
        int chs;
        cout << "Choose Your Process\n1-Deposit Money\n2-Withdraw Money\n3-Remaining Balance\n4-Sign Out" << endl;
        cin >> chs;
        switch (chs) {


        case 1:
            int deposit;
            cout << "Yatırılacak Tutar:" << endl;
            cin >> deposit;
            money = money + deposit;
            break;
        case 2:
            int withdraw;
            if (money <= 0) {
                cout << "Yetersiz Bakiye!!!" << endl;
                break;
            }

            cout << "Cekilecek Tutar:" << endl;
            cin >> withdraw;
            if (money < withdraw) {
                cout << "Yetersiz Bakiye" << endl;
                break;
            }
            money = money - withdraw;
            
            break;
        case 3:
            cout << "Bakiye:" << money << endl;
            break;
        case 4:
            break;
        }


    } while (true);
}
