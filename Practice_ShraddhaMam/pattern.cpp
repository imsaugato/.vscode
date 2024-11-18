#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, i, j, b, a=2;
    cout << "Gime me rows number: " << endl;
    cin >> n;
    

    i = 1;
    while (i <= n){ 

        b = 1;
        while (b<=n-i){
            cout << " ";
            b++;
        }
        
        j = 1;
        while (j <= 2*i-1){
            cout << "*";
            j = j + 1;
        }

        cout << "\n";
        i = i + 1;

        while (i <= 2*n){
            
            
            b = 1;
            while (b<=n+i){
            cout << " ";
            b++;
            }


            j = 1;
            while (j <= 2*i+1)
            {
            cout << "*";
            j = j + 1;
            }

             cout << "\n";
            i++;

        }
       
    }
 
    return 0;

    
}