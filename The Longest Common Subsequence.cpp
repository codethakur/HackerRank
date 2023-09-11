#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(vector<int>& num1, vector<int>& num2) {
    int m = num1.size();
    int n = num2.size();

    int table[m + 1][n + 1];
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(i == 0 || j == 0)
                table[i][j] = 0;
        }
    }
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(num1[i - 1] == num2[j - 1]) {
                table[i][j] = 1 + table[i - 1][j - 1];
            } else {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    // Reconstruct the longest common subsequence
    int lcs_length = table[m][n];
    vector<int> lcs(lcs_length);
    int i = m, j = n, k = lcs_length - 1;
    while (i > 0 && j > 0) {
        if (num1[i - 1] == num2[j - 1]) {
            lcs[k] = num1[i - 1];
            i--;
            j--;
            k--;
        } else if (table[i - 1][j] > table[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    // Print the longest common subsequence
    for (int idx = 0; idx < lcs_length; idx++) {
        cout << lcs[idx] << " ";
    }
    cout << endl;

    return lcs_length;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> num1(n);
    vector<int> num2(m);

    for (int i = 0; i < n; i++) {
        cin >> num1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> num2[i];
    }

    int lcs_length = longestCommonSubsequence(num1, num2);
   // cout << "Length of LCS: " << lcs_length << endl;

    return 0;
}
