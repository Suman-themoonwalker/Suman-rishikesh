#include<stdio.h>
#include<string.h>
int main()
{
    int n,rev=0,temp;
    scanf("%d",&n);
    while(n!=rev){
        n=n+rev;
        rev=0;
        temp=n;
        while(temp!=0){
            rev=rev*10+temp%10;
            temp/=10;
        }
    }
    printf("%d",n);
}
