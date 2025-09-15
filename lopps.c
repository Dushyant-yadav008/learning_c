#include<stdio.h>

int main(){
    int p,n,r, SI;
    for(int c=0;c<3;c++)
    printf("enter the value of p,n,r");
    scanf("%d%d%d,&p,&n,&r");

     SI=p*n*r/100;
    printf("simple interest is %d", SI);
    return 0;

}