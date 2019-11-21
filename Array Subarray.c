#include<stdio.h>
int main(){
    int a[9],i;
    for(i=0;i<9;i++){
        scanf("%d ",&a[i]);
    }
    int l=0,r=8,mid=0,flag=0;
    while(1){
        if(a[l]<a[r]){
            l+=1;
            a[l]=a[l]+a[l- 1];
        }
        else if(a[l]>a[r]){
            r-=1;
            a[r]=a[r]+a[r- 1];
        }
        else if(a[l]==a[r]){
            for(i=a[l+2];i<a[r-1];i++)
                mid+=a[i];
            if(mid==a[l])
                break;
            else{
                l+=1;
                a[l]+=a[l-1];
                continue;
            }

        }
        if(r==l){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d,%d",l+1,r-1);
    }
    else
        printf("-1");

}
