#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int currentValue = 0, nextValue = 0;

    if (cin >> currentValue)
    {
        int count = 1;

        while (cin >> nextValue)
        {
            if (nextValue == currentValue)
            {
                ++count;
            }
            else
            {
                cout << currentValue << " Occurs " << count << " times " << endl;

                currentValue = nextValue;
                count = 1;
            }

        }
        cout << currentValue << " Occurs " << count << " times " << endl;

    }

    return 0;
}