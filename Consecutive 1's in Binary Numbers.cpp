#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string binary = ""; // To store the binary representation as a string
    int consecutiveOnes = 0; // To count consecutive ones
    int maxConsecutiveOnes = 0; // To store the maximum consecutive ones found so far

    // Convert the decimal number to binary
    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n /= 2;
    }

    // Iterate through the binary representation to find consecutive ones
    for (char digit : binary) {
        if (digit == '1') {
            consecutiveOnes++;
            if (consecutiveOnes > maxConsecutiveOnes) {
                maxConsecutiveOnes = consecutiveOnes;
            }
        } else {
            consecutiveOnes = 0;
        }
    }

    cout << maxConsecutiveOnes << endl;

    return 0;
}
