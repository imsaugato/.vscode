#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double a,b;
    cout << "Enter Two numbers: " << endl;
    cin >> a >> b;


    char operators;
    cout <<"Operators: + - * / "<< endl;
    cin >> operators;

    switch (operators)  
    {
    case '+':
       cout << "Addition of those: " << a + b << endl;

        break;
    case '-':
        cout << "Substraction of those: " << a - b << endl;

        break;
    default:
        break;
    }

    if (a > b || a < b){
        cout << "It works" << endl;
    }
    else {
        cout << "it was equal" << endl;
    }


}   