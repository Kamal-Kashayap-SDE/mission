#include <iostream>
using namespace std;
int main(){
    double temp_in_Farenhite;
    cout<<"Enter the temperature in Farenhite:- " ;
    cin>>temp_in_Farenhite;
    double temp_in_celcius = ((temp_in_Farenhite - 32)*5)/9;
    cout<<"Temperature in degree celcius:- "<< temp_in_celcius;
    return 0;
}