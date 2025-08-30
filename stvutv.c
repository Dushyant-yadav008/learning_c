//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    int a,b,temp;
    a=3;
    b=5;
    temp=b;//temp=5
    b=a;//b=3
    a=temp;//a=5
    printf("value of a= %d \n",a);
    printf("value of b= %d \n",b);
    
}