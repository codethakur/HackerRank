#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int currDay;
    int currMonth;
    int currYear;
    cin>>currDay>>currMonth>>currYear;
    
    int ExpDay;
    int ExpMonth;
    int ExpYear;
    cin>>ExpDay>>ExpMonth>>ExpYear;
    
    int fine =0;
    
    if(currYear<ExpYear)
    {
        fine=0;
    }else {
        if(currYear>ExpYear){
            fine=10000;
        }else if (currMonth>ExpMonth) {
            fine = 500*(currMonth-ExpMonth);
        }else if(currDay>ExpDay){
            fine  =15*(currDay-ExpDay);
        }
    }
    cout<<fine;
    
    return 0;
}
