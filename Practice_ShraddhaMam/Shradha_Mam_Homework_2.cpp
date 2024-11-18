#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    cout << "Give Me N: ";
    cin >> N;

    int factorial = 1;

    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }

    cout << "factorial of N: " << factorial;
}   
