/*
Made by itsKrish01
If you find any problem in it, then contact me.
*/


#include <iostream>
#include <string.h>

using namespace std;

class Bank{
    private:
    int accountNo;
    int amount = 0;
    int total = 0;
    int with = 0;
    string name;

    public:
    void registration(){

      cout << "WELCOME TO REGISTRATION!"<<endl;
        cout << "Enter Your name: ";
        cin >> name;

        cout << "Enter your Account No. : ";
        cin >> accountNo;

        cout << "Enter your Balance: ";
        cin >> total;
        cout <<"\n\n\n\n\n";

    }

    void ShowBal(){
        cout << "Total Balance: " << total <<endl;
        cout <<"\n\n\n\n\n";
    }

    void AboutOwner(){
        cout << "Name: "<< name <<endl;
        cout << "Account number: " << accountNo <<endl;
        cout << "Total Balance: " << total <<endl;
        cout <<"\n\n\n\n\n";
    }

    void Withdraw(){
        
        cout << "Enter Amount to be withdrawn: ";
        cin >> with;

        total = total - with;

        while(1){
            if(with > total){
                cout << "Insufficient Balance!";
            }
            else if(with <= total){
                cout << "You have withdrawn " << with <<" Now you have left "<<total<<" Amount in your bank"<<endl;
                cout <<"\n\n\n\n\n";
                break;
            }
        }
    }

    void Deposite(){
      int dep;
      cout << "Enter your amount to be Deposited: ";
      cin >> dep;

      total = total + dep; 

      cout << "Your total bal is now : "<< total << endl;
      cout <<"\n\n\n\n\n";

      
    }
};


int main(){
    Bank b;

    int choice;

        while(1){
            cout <<"------------WELCOME------------\n\n";
            cout << "Choose the action that you want to perform!\n";
            cout << "\t1. Enter your details (recommended for first time running it!)\n ";
            cout << "\t2. Balance\n";
            cout << "\t3. Deposit Money\n";
            cout << "\t4. Withdraw Money\n";
            cout << "\t5. Inquiry\n";
            cout << "\t6. Cancle\n";

            cout << "Enter Your Choice: ";
            cin >> choice;
            cout << endl;

            switch (choice)
            {
            case 1:
            b.registration();
            break;

            case 2:
            b.ShowBal();
            break;

            case 3:
            b.Deposite();
            break;

            case 4:
            b.Withdraw();
            break;

            case 5:
            b.AboutOwner();
            break;
            
            case 6:
            exit(1);
            default:
            cout << "Invalid!";
            }
        }
}

