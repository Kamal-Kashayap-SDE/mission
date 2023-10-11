#include<iostream>
#include <cmath>
using namespace std;
int main(){
    double radius;
    cout<<"Radius: ";
    cin>>radius;
    const double pi = 3.14;
    double area = pi*pow(radius,2);
    cout<<"Area of a circle: "<<area;
    return 0;


}