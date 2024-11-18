#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Give N: ";
    cin >> n;

    int exeCount, primeCount;
    
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            primeCount++;
        }
        
    }
    cout << "Prime Count: " << primeCount << endl;
        
    return 0;

    // n =10; 2, 3, 5, 7, 11, 13, 17, 19;
}