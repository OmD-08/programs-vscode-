#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class BankAccount{

    private:
        string name;
        double acc_number;
        double balance;
    public:
        BankAccount(){
            name = "Om";
            acc_number = 12345678.0;
            balance = 100000;
        }

        void deposit(){
            int amount;
            cout<<"Enter the amount you want to deposit : ";
            cin>>amount;
            balance = balance + amount;
        }

        void withdraw(){
            int amount;
            cout<<"Enter the amount you want to  withdraw : ";
            cin>>amount;
            if(amount>balance){
                cout<<"Insufficient balance !";
            }
            else{
            balance = balance - amount;
            }
        }

        void displayBalance(){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout<<"Account name = "<<name<<endl;
            cout<<"Account number = "<<fixed<<setprecision(0)<<acc_number<<endl;
            cout<<"Your current account balance = "<<balance<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        }
};

int main(){
    BankAccount obj;
    int option;
    
    do{
        cout<<"Choose one of the option : \n";
        cout<<"1 - To check account balace.\n";
        cout<<"2 - To withdraw.\n";
        cout<<"3 - To deposit\n";
        cout<<"4 - To exit.\n";
        cin>>option;

        switch(option){
            case 1:
            obj.displayBalance();
            break;

            case 2:
            obj.withdraw();
            obj.displayBalance();
            break;

            case 3:
            obj.deposit();
            obj.displayBalance();
            break;

            case 4:
            cout<<"Exiting now !\n";
            return 0;
            break;


        }
    }
    while(option != 4);
    
    return 0;
}