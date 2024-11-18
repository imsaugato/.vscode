#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Give Me N: " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i%3 == 0)
        {
            sum += i;
        }

        
    }

    cout << "Sum of 1 to N that divisible by 3: " << sum << endl;
}