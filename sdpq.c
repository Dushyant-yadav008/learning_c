// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    float num1,num2,s,d,p,q;
    printf("num1");
    scanf("%f",&num1);

    printf("num2");
    scanf("%f",&num2);

    s=num1+num2;
    printf("the sum of two numbers %f",s);

    d=num1-num2;
    printf("the differernce of two numbers %f",d);

    p=num1*num2;
    printf("the product of two numbers %f",p);

    q=num1/num2;
    printf("the quotient of two numbers%f",q);

    return 0;

}