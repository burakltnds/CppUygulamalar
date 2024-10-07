#include <iostream>
using namespace std;

int main()
{
    double midterm, finalScr,quiz;
    double gAvrg;
    
    //for quiz
    do {
        cout << "Enter Your Quiz Score:";
        cin >> quiz;
        if (quiz < 0 || quiz > 100) {
            cout << "You Entered An Invalid Score!!!"<<endl;
        }
    }while (quiz < 0 || quiz > 100);
    
    //for midterm exam
    do {
        cout << "Enter Your Midterm Exam Score:";
        cin >> midterm;
        if (midterm < 0 || midterm > 100) {
            cout << "You Entered An Invalid Score!!!" << endl;
        }
    } while (midterm < 0 || midterm > 100);
    
    //for final exam
    do {
        cout << "Enter Your Final Score:";
        cin >> finalScr;
        if (finalScr < 0 || finalScr > 100) {
            cout << "You Entered An Invalid Score!!!" << endl;
        }
    } while (finalScr < 0 || finalScr > 100);

        gAvrg = (quiz * (0.1)) + (midterm * (0.3)) + (finalScr * (0.6));
        cout << "General Average:"<<gAvrg<<endl;

        
            if (gAvrg >= 50 && finalScr >= 50) {
                cout << "Congrulations Pass Your Class";

            }
            else if (gAvrg >= 50 && finalScr < 50) {
                cout << "Unfortunately You Fail Your Class (Your Final Score is Insuficcient):" << finalScr << endl;
            }
            else if (gAvrg < 50) {
                cout << "Unfortunately You Fail Your Class (Your General Average Score is Insuficcient):" << gAvrg << endl;
            }
    
    
    return 0;
}
