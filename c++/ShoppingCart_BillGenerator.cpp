#include<iostream>
#include<string>
using namespace std;

class ShoppingCart{

    
    string itemName;
    double unitPrice;
    int quantity;
    
    void getData(){
        cout<<"Item name : ";
        cin>>itemName;
        cout<<"Item price : ";
        cin>>unitPrice;
        cout<<
    }
    
    
    
    double getTotalPrice(){
        
        return (unitPrice * quantity);   
    }


    
};

int main(){
    
    return 0;
}