#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[n],i,I,temp,sum,flag=0;
for(i=0;i<n;i++){
	scanf("%d ",&a[i]);
}
for(i=0;i<n;i++){
	I=a[i],temp=0,sum=0;
	if(a[i]>9){
		while(I!=0){
			temp=I%10;
			sum+=temp;
			I/=10;
		}
		if(a[i]%sum==0){
			printf("%d ",a[i]);
			flag++;
	}
	}
	else{
		printf("%d ",a[i]);
		flag++;
	}
}
if(flag==0)
    printf("-1");
return 0;
}
