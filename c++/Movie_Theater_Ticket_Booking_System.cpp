#include<iostream>
#include<string>
using namespace std;

class Theater{
private:
    string movieTitle;
    double moviePrice;
    char seats[5][5]; // Here 'O' = Available & 'X' = Booked
public:
    Theater(string title,double price){
        movieTitle = title;
        moviePrice = price;
        for(int i=0;i<5;i++){ // This will set all the sits to 'O' when the programs starts
            for(int j=0;j<5;j++){
                seats[i][j] = 'O';
            }
        }
    }

    void displayLayout(){
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"~~~~~ Welcome to our Theater ~~~~~\n"
            <<"Movie : "<<movieTitle<<endl
            <<"Price : "<<moviePrice<<endl
            <<"  1 2 3 4 5"<<endl
            <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        for(int i=0;i<5;i++){
            cout<<(i+1)<<" ";
            for(int j=0;j<5;j++){
                cout<<seats[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }

    void bookTicket(int row,int col){
        int r = row - 1; // Because index start from 0
        int c = col - 1;
        if(r<0 || r>4 || c<0 || c>4){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout<<"Error the row and column must be between (1-4)\n";
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            return;
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        if(seats[r][c] == 'X'){
            cout<<"Sorry that seat is already taken \n";
        }
        else{
            seats[r][c] = 'X';
            cout<<"\aCongratulations ! Your ticket is booked !\n";
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }

    void cancelTicket(int row,int col){
        int r = row - 1;
        int c = col - 1;
        if(r<0 || r>4 || c<0 || c>4){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout<<"Error the row and column must be between (1-4)\n";
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            return;
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        if(seats[r][c] == 'O'){
            cout<<"That seat is not booked.\n";
        }
        else{
            seats[r][c] = 'O';
            cout<<"\aYour ticket is canceled.\n";
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }

    void getRevenue(){
        double count = 0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(seats[i][j] == 'X'){
                    count++;
                }
            }
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"Total revenue of movie "<<movieTitle<<" : "<<(count*moviePrice)<<"rupees"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
};

int main(){
    string movie_name;
    cout<<"Enter the name of the movie : ";
    getline(cin,movie_name);
    Theater obj(movie_name,101);
    int option = 0;
    int r,c;
    while(option != 5){
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t1. Show. \n"
            <<"\t2. Book. \n"
            <<"\t3. Cancel. \n"
            <<"\t4. Revenue. \n"
            <<"\t5. Exit. \n";
        cout<<"Choose any one option from the following : ";
        cin>>option;
        if (option<0 || option>5){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout<<"\aError wrong option chosen\n";
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break;
        }
        if (option == 1) {
            obj.displayLayout();
        }
        else if (option == 2) {
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "Row: "; cin >> r;
            cout << "Col: "; cin >> c;
            obj.bookTicket(r,c);
        }
        else if (option == 3) {
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout<<"Row: ";cin>>r;
            cout<<"Col: ";cin>>c;
            obj.cancelTicket(r,c);
        }
        else if (option == 4) {
            obj.getRevenue();
        }
        if(option == 5){
            cout<<"\aExiting.\n";
        }
    }
    return 0;
}
