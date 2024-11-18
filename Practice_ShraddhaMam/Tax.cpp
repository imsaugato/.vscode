#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double sales =  0;
    
    cout << "Total Sales = "; cin >> sales;
    cout << "Sales = $" << sales << endl;

    double stateTax = sales * 0.04;
    cout << "State Tax = $" << stateTax << endl;

    double countyTax = sales * 0.02;
    cout << "County Tax = $" << countyTax << endl;

    double profit = sales - (stateTax + countyTax);

    cout << "Profit = $" << profit << endl; 
}