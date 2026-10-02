/* Create 2 classes:
1. SimpleCalculator Takes input of 2 numbers using a utility function and perfoms +,-,*,/ and displays the results using another function.
2. ScientificCalculator Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.*/

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        double a;
        double b;

    public:
        void getData1(){
            
            cout<<"Enter the value of 1st number : ";
            cin>>a;
            cout<<"Enter the value of 2nd number : ";
            cin>>b;

        }

        int Calculation1(){
            int option;
            cout<<"Choose any one option : \n"
                <<"1- Add\n2- Subtract\n3- Multiply\n4- Divide\n5- Exit\n";    
            cin>>option;
            if(option == 1){
                cout<<"The addition of "<<a<<" + "<<b<<" = "<<a+b<<endl;
            }
            else if(option == 2){
                cout<<"The subtracton of "<<a<<"-"<<b<<" = "<<a-b<<endl;
            }
             else if(option == 3){
                cout<<"The multiplicaton of "<<a<<" * "<<b<<" = "<<a*b<<endl;
            }  
             else if(option == 4){
                cout<<"The division of "<<a<<" / "<<b<<" = "<<a/b<<endl;
            }
             else if(option == 5){
                cout<<"Exiting the program !";
                return 0;
            }
            else{
                cout<<"Error occoured ! Please try again.";
            }    
        }

};

class ScientificCalculator{
    protected:
        double a;
        double b;

    public:
        void getData2(){
            cout << "Enter the value of 1st number : ";
            cin >> a;
            cout << "Enter the value of 2nd number : ";
            cin >> b;
        }

        void Calculation2(){
            int option;
            cout << "\nChoose any one option :\n"
                 << "1- Square root\n2- Cube root\n3- Log\n4- Power\n5- Exit\n";
            cin >> option;

            if(option == 1){
                cout << "Square root of " << a << " is : " << sqrt(a) << endl;
            }
            else if(option == 2){
                cout << "Cube root of " << a << " is : " << cbrt(a) << endl;
            }
            else if(option == 3){
                cout << "Log of " << b << " is : " << log(b) << endl;
            }
            else if(option == 4){
                cout << "Power of " << a << " raised to 4 is : " << pow(a, 4) << endl;
            }
            else if(option == 5){
                cout << "Exiting the program!" << endl;
            }
            else{
                cout << "Error occurred ! Please try again." << endl;
            }
        }
};

class HybridCalculator: public ScientificCalculator,public SimpleCalculator{

    public:
    int display(){
        int option;
        cout<<"1 :- Simple Calculator \n"
            <<"2 :- Scientific Calulator \n"
            <<"3 :- Exit \n";
        cout<<"Choose any one option : ";
        cin>>option;
        if(option == 1){

            getData1();
            Calculation1();

        }
        else if(option == 2){
            getData2();
            Calculation2();
        }
        else if(option == 3){
           cout<<"Exiting the program!"<<endl;
           return 0;
        }
        else{
            cout<<"Error occoured ! Please try again.";
        }
    }
};

int main(){
    HybridCalculator obj;
    obj.display();
    return 0;
}