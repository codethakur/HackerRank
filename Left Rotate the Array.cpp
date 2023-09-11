#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin>>n>>d;
    vector<int>nums(n);
    int temp[n];
    for(int i=0; i<nums.size(); i++)
    {
        cin>>nums[i];
    }
    for(int i=0; i<d; i++){
        int FirsetElement = nums[0];
        for(int j=0; j<n-1; j++){
            nums[j] = nums[j+1];
        }
        nums[n-1] = FirsetElement;
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}
