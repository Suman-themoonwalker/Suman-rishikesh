#include<stdio.h>
#include<math.h>
int main()
{
    int sqside,speed1,speed2,area;
    scanf("%d %d %d %d",&sqside,&speed1,&speed2,&area);
    int dist,dist1,dist2,speed;
    float time;
    dist1=sqside*(1.414);
    dist2=(sqrt(area))*(1.414);
    dist=dist1-dist2;
    speed=abs(speed1-speed2);
    time= dist/speed;
    printf("%f",time);
}
