#include <bits/stdc++.h>
using namespace std;

// Function to find the next lexicographically greater permutation of a string
bool nextPermutation(string& word) {
    int n = word.size();
    int k = -1;

    // Find the largest index k such that word[k] < word[k+1]
    for (int i = n - 2; i >= 0; i--) {
        if (word[i] < word[i + 1]) {
            k = i;
            break;
        }
    }

    // If no such k exists, the string is the last permutation
    if (k == -1) {
        return false;
    }

    // Find the largest index l such that word[l] > word[k]
    int l;
    for (l = n - 1; l > k; l--) {
        if (word[l] > word[k]) {
            break;
        }
    }

    // Swap word[k] and word[l]
    swap(word[k], word[l]);

    // Reverse the substring word[k+1, n-1]
    reverse(word.begin() + k + 1, word.end());

    return true;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;
        bool hasNext = nextPermutation(str);

        if (hasNext) {
            cout << str << endl;
        } else {
            cout << "no answer" << endl;
        }
    }

    return 0;
}
/*
#include <iostream>
#include <algorithm>
using namespace std;

bool nextPermutation(string& word) {
    if (next_permutation(word.begin(), word.end())) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str

*/
