#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    string total, trans;

    if (cin >> total){
        while (cin >> trans){
            if (total == trans){
                total += trans;

            }
            else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
       
    }
    else{
            cerr << "No Data?" << endl;
            return -1;
        }
    return 0;



}