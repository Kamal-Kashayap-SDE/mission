#include <iostream>
using namespace std;
int main(){
    double Sales = 95000;
    const double state_tax_rate = 0.04, county_tax_rate = 0.02;
    double cost_state_tax = Sales*state_tax_rate;
    double cost_county_tax = Sales*county_tax_rate;
    double total_Sales = Sales - (cost_state_tax +  cost_county_tax);
    cout<< total_Sales;
}