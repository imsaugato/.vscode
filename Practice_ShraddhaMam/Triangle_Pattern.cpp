#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int row;
    cout << "Give me Rows: ";
    cin >> row;
    
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }

        

        for (int i = 0; i < row; i++)
        {
        for (int j = 0; j <= 2*row-i; j++)
        {
            cout << " ";

        }

        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }

        
        }

        cout << endl;

       
    }


    /*for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= 2*row-i; j++)
        {
            cout << " ";

        }

        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }*/

    return 0;
}