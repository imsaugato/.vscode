#include <iostream>
#include <algorithm>
#include <vector>

// Function to extract digits from a number
std::vector<int> extractDigits(int number) {
    std::vector<int> digits;

    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }

    // Add leading zeros if needed (for 4-digit numbers)
    while (digits.size() < 4) {
        digits.push_back(0);
    }

    return digits;
}

// Function to form a number from digits
int formNumber(const std::vector<int>& digits) {
    int number = 0;
    for (int digit : digits) {
        number = number * 10 + digit;
    }
    return number;
}

// Kaprekar's constant function
bool kaprekarsConstant(int number) {
    const int KAPREKAR_CONSTANT = 6174;
    
    while (number != KAPREKAR_CONSTANT) {
        // Extract digits
        std::vector<int> digits = extractDigits(number);

        // Sort digits in ascending order for the smallest number
        std::sort(digits.begin(), digits.end());
        int smallest = formNumber(digits);

        // Sort digits in descending order for the largest number
        std::sort(digits.rbegin(), digits.rend());
        int largest = formNumber(digits);

        // Subtract smallest from largest
        number = largest - smallest;

        // If the number becomes less than 4 digits, pad it with leading zeros
        if (number < 1000) {
            number *= 10;
        }

        // If we reach 6174, return true
        if (number == KAPREKAR_CONSTANT) return true;
        
        // If we reach 0 (like with identical digits), it won't converge to 6174
        if (number == 0) return false;
    }

    return false;
}

int main() {
    int N;

    // Ask the user for input range
    std::cout << "Enter a number N (to check Kaprekar's routine for numbers from 1 to N): ";
    std::cin >> N;

    if (N < 1 || N > 9999) {
        std::cout << "Please enter a number between 1 and 9999." << std::endl;
        return 1;
    }

    int count = 0;  // To count how many numbers reach 6174

    // Loop through all numbers from 1 to N
    for (int number = 1; number <= N; ++number) {
        // Skip numbers with identical digits, as they don't converge to 6174
        std::vector<int> digits = extractDigits(number);
        if (std::all_of(digits.begin(), digits.end(), [&](int d){ return d == digits[0]; })) {
            continue;  // Skip numbers like 1111, 2222, etc.
        }

        // Check if the number reaches Kaprekar's constant
        if (kaprekarsConstant(number)) {
            count++;
        }
    }

    // Output the result
    std::cout << "Number of numbers from 1 to " << N << " that obey Kaprekar's constant: " << count << std::endl;

    return 0;
}
