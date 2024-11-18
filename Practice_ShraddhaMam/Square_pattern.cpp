#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    
    int n;
    cout << "Give me Rows: ";
    cin >> n; 

    int num = 1;

    for (int i = n; i >= 1; i--)
    {
        
        for (int j = i; j > 0; j--)
        {
            cout << "*";
            
        }
        

        cout << endl;
    }
        
    return 0;
}