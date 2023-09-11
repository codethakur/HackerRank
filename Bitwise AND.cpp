#include<iostream>
#include "vector"
using namespace std;

int BitwiseAND(int n, int k)
{
    int maxAnd =0;
    for(int a =1; a<=n; a++)
    {
        for(int b=a+1; b<=n; b++)
        {
            int currAnd = a&b;
            if(currAnd>maxAnd && currAnd<k)
            {
                maxAnd = currAnd;
            }
        }
    }
    return maxAnd;
}
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int result = BitwiseAND(n, k);
        cout << result << endl;
    }

    return 0;
}
