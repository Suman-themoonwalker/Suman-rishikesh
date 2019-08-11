#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int min,max,i,j,val,sum=0,count=0;
    printf("minlimit=");
    scanf("%d",&min);
    printf("maxlimit=");
    scanf("%d",&max);
    for(i=min;i<max+1;i++){
        while(i!=0){
            j=i%10;
            val=j;
            sum=sum+val;
            i=i/10;
        }
        if(sum==8){
            count+=count;
        }
    }
    printf("count=%d",count);
    return 0;
}

