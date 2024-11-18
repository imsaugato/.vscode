#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int currVal = 0, val = 0;

    if (cin >> currVal)
    {
        int cnt = 1;

        while (cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                cout << currVal << " Occurs " << cnt << " times " << endl;

                currVal = val;
                cnt = 1;
            }

        }
        cout << currVal << " Occurs " << cnt << " times " << endl;

    }


    return 0;



}