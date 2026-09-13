#include<iostream>
#include<cmath>

using namespace std;

class Point{
    private: 
        float x1,y1,x2,y2;

    public:

    Point(float a1,float b1,float a2,float b2){
        x1 = a1;
        y1 = b1;
        x2 = a2;
        y2 = b2;
    }

    void distance(){
        float dist;
        dist = sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"The distance between two points = "<<dist<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }

};

int main(){
    float x1,y1,x2,y2;
    cout<<"Enter the value of point x1 : ";
    cin>>x1;
    cout<<"Enter the value of point y1x2 : ";
    cin>>y1;
    cout<<"Enter the value of point x2 : ";
    cin>>x2;
    cout<<"Enter the value of point y2 : ";
    cin>>y2;

    Point obj(x1,y1,x2,y2);
    obj.distance();

    return 0;
}