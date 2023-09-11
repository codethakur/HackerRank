#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Create a map to store the counts of remainders when dividing by k
    unordered_map<int, int> remainder_count;
    
    // Count the remainders
    for (int i = 0; i < n; i++) {
        int remainder = a[i] % k;
        remainder_count[remainder]++;
    }
    
    // Initialize count to count the valid pairs
    long long count = 0;
    
    // Count the pairs
    for (int i = 0; i <= k / 2; i++) {
        if (i == 0) {
            // Count pairs with remainder 0 (a[i] is divisible by k)
            count += (remainder_count[i] * (remainder_count[i] - 1)) / 2;
        } else if (2 * i == k) {
            // Count pairs with remainder k/2 (a[i] is divisible by k/2)
            count += (remainder_count[i] * (remainder_count[i] - 1)) / 2;
        } else {
            // Count pairs with remainders i and k - i
            count += (long long)remainder_count[i] * remainder_count[k - i];
        }
    }
    
    cout << count << endl;
    
    return 0;
}
