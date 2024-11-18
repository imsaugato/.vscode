#include <iostream>
//include <vector>
//#include <string>
//#include <algorithm>

using namespace std;

int findingMax()
{
    //int ans = 0;

    int largest = INT_MIN;

    int ar[] = {0, 3, 4, 6, 23 ,54 , -2, 5};
    int sz = 8;

    for (int i = 0; i < sz; i++)
    {
        if (ar[i] > largest)
        {
            largest = ar[i];
        }
    }

    return largest;
}

int findingMin()
{
    //int ans = 0;

    int smallest = INT_MAX;

    int ar[] = {0, 3, 4, 6, 23 ,54 , -2, 5};
    int sz = 8;

    for (int i = 0; i < sz; i++)
    {
        if (ar[i] < smallest)
        {
            smallest = ar[i];
        }
    }

    return smallest;
}


void findingUnique()
{
    int nums[] = {7, 4, 4, 4, 5, 8, 3, 2, 3, 2};
    int sz = 10;
    int nums2[] = {8, 7, 1, 5, 8, 1, 6};
    int sz2 = 7;
    
    int ans = 0;
    int ans2 = 0;

    int count = 0;
    int count2 = 0;


    for (int i = 0; i < sz; i++)
    {
        ans = nums[i];
        
        

        for (int j = 0; j < sz; j++)
        {
            
            if (ans == nums[j])
            {
                count++;
                
            }
            
        }

        if (count == 1)
        {
            cout << ans << endl;
        }



        count = 0;

    }

    for (int i = 0; i < sz; i++)
    {
        ans = nums[i];
        
        

        for (int j = 0; j < sz; j++)
        {
            
            if (ans == nums[j])
            {
                count++;
                
            }
            
        }

        if (count == 1)
        {
            cout << ans << endl;
        }



        count = 0;

    }

}





int main()
{

    //cout << findingMax();
    
    findingUnique();



    
    
    

    


    return 0;
}   