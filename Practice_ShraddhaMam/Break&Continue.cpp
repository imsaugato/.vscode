#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int date;
    cout << "Satrting Date: "; cin >> date;
    

    double pocketMoney;
    cout << "Monthly PocketMoney: ";  cin >> pocketMoney;


    double evPocketM;
    cout << "Everyday Pocket Money: "; cin >> evPocketM;
    

   int dayCount = 0;
   int dateCount = 0;
    
   for (date; date <= 30; ++date)
   {
        if (date % 2 == 0)
        {
            dateCount = date;
            

            cout << "Out Date: " << dateCount << endl;
            continue;
            
        }
        if (pocketMoney <= 0)
        {
            cout << "Out of the home: " << dayCount << endl; 
            cout << "Pocket Money Have: " << pocketMoney << endl;


           



            break;

            
            
        }


        
       

        
        
        pocketMoney -= evPocketM;
        dayCount += 1;
        

        

        //cout << "Go in" << endl;
        //cout << "Pocket Money Have: " << pocketMoney << endl;;
        
        //cout << "Out of the home: " << dayCount << endl; 

    
  

   }
   cout<< "End of the Month" << endl;
   cout << "Pocket Money Have: " << pocketMoney << endl;;

    return 0;
}