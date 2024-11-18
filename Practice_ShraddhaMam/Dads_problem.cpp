#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <vector>     


using namespace std;



int main()
{
    cout << "Enter Minimum: " << endl;
    int minimum;
    cin >> minimum;

    cout << "Enter Maximum: " << endl;
    int maximum;
    cin >> maximum;

    int exeCount = 0, result, number;





    while (minimum <= maximum)
    {
        cout << "working" << endl;


        minimum == number;


        std::vector<int> extractDigits(int number) {
        std::vector<int> digits;

        while (number > 0) {
        digits.push_back(number % 10);  // Extract the last digit
        number /= 10;  // Remove the last digit
        }

        return digits;
        }

        // Function to form a number from a vector of digits
        int formNumber(const std::vector<int>& digits) {
        int number = 0;
        for (int digit : digits) {
        number = number * 10 + digit;
        }
        return number;
        }

        // Extract the digits of the number
        std::vector<int> digits = extractDigits(number);

        // Sort the digits in ascending order for the smallest number
        std::sort(digits.begin(), digits.end());
        int smallest = formNumber(digits);

        // Sort the digits in descending order for the largest number
        std::sort(digits.rbegin(), digits.rend());
        int largest = formNumber(digits);

        // Output the results
        std::cout << "Smallest possible number: " << smallest << std::endl;
        std::cout << "Largest possible number: " << largest << std::endl;
        
        int sum = 1;
        while (result != 6174)
        {
            result = largest - smallest;
            sum++;

            if (sum > 7 && result != 6174)
            {
                continue;
            }
            else 
            {
                exeCount++;
            }

        }

        minimum++;
    }

    cout << "Execution(s): " << exeCount << endl;
    return 0;



}