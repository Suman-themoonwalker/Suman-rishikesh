#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum_(int);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int min,max;
    int l;
    int sum,count=0;
    cin>>min;
    cin>>max;
    for(l=min;l<=max;l++){
        sum= sum_(l);
        if(sum==8)
            count++;
    }
    cout<<count;
    return 0;
}
int sum_(int num){
    int rem,val=0;
    while(num!=0){
            rem=num%10;
            num=num/10;
            val=val+rem;
        }
    return val;
}

