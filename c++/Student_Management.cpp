#include <iostream>
#include <string>
using namespace std;

class Student
{
    int Roll_no;
    string firstName,lastName;
    int marks[3];
    float percentage;

public:
    void getDetails();
    void displayDetails();
    float calculatePercentage();
};
void Student::getDetails()
{

    cout << "Enter the Roll no : ";
    cin >> Roll_no;

    cout << "Enter Your name : ";
    cin>>firstName>>lastName;

    cout << "Enter the marks of C++ : ";
    cin >> marks[0];
    cout << "Enter the marks of Python : ";
    cin >> marks[1];
    cout << "Enter the marks of Java : ";
    cin >> marks[2];
}

float Student ::calculatePercentage()
{

    percentage = ((marks[0] + marks[1] + marks[2]) / 300.0) * 100;
    return percentage;
}

void Student ::displayDetails()
{

    cout << "--------------------------------------------\n";
    cout << "\tYour Roll No. = " << Roll_no << endl;
    cout << "\tYoutr Name = " <<firstName<<" "<<lastName<< endl;
    cout << "\tYour marks of C++ : " << marks[0] << endl;
    cout << "\tYour marks of Python : " << marks[1] << endl;
    cout << "\tYour marks of Java : " << marks[2] << endl;
    cout << "\tYour Percentage = " << percentage << " %" << endl;
    cout << "--------------------------------------------\n";
}

int main()
{

    Student s;

    s.getDetails();
    s.calculatePercentage();
    s.displayDetails();

    return 0;
}