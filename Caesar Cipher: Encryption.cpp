#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
        for(int i=0;i<n;i++)
     {   
           if(s[i]>='A' && s[i]<='Z'){ 
               s[i] = ((s[i] - 65 + k) % 26) + 65;
               cout<<char(s[i]);
           }
            else if (s[i]>='a' && s[i]<='z'){
            s[i] = ((s[i] - 97 + k) % 26) + 97;
            cout<<char(s[i]);
             }
            else
                cout<<char(s[i]);
        }
    return 0;
}
