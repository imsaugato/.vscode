#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;




int swapingMinMax()
{
    int ar[] = {1,2,3,5,5,6,7,-8,9,10};
    int sz = 10;

   

    int smallest = INT_MAX;
    int largest = INT_MIN;


    for (int i = 0; i < sz; i++)
    {
        if (ar[i] < smallest)
        {
            smallest = ar[i];
        }

        if (ar[i] > largest)
        {
            largest = ar[i];
        }

    }

    //swap(largest, smallest);

    

    

    //swap(largest, smallest);


    return largest;
    //return smallest;
    


   
}





bool isPrime(int n)
{
    if (n <= 1) return false;

    for (int i = 2; i <= (n/2); i++)
    {
        if (n % i == 0) return false;
    }


    return true;
}


int sumOfArray(int ar[], int sz) 
{
    int ans;
    for (int i = 0; i < sz; i++)
    {
        ans += ar[i]; 
    }

    return ans;

}


int decimalToBinary(int decimal)
{
    int ans = 0, power = 1;

    while(decimal > 0)
    {
        int remainder = decimal % 2;
        decimal /= 2;

        ans += remainder * power;

        power *= 10;
    }


    return ans;
}


int binaryToDecimal(int binnum)// Binary to decimal = binary digit * 2powerN;
{
    int ans = 0, power = 1;

    while (binnum > 0)
    {
        int valueToWork = binnum % 10;// getting last digit to grind
        ans += valueToWork * power;//Digit * 2 Power N

        
        binnum /= 10;// updating binary to catch previous digit

        
        power *= 2; // updating power(2powerN); 2power0 = 1; 2 power1 = 2; 2power 2 = 4/// its = n *2;

    }

    return ans;
}



int main()
{
    /*for (int j = 1; j <= 50; j++)
    {
        if (isPrime(j))
        {
            cout << j << " is a prime Number." << endl;
        }
        else
        {
            cout << j << " is not a prime Number." << endl;

        }
    }


   for (int i = 1; i <= 50; i++)
   {
       cout << decimalToBinary(i) << endl;

   }*/

    //cout << binaryToDecimal(1000) << endl;

    

    //cout << sumOfArray(ar, 10);

    cout << swapingMinMax();



    return 0;
}   