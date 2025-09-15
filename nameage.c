#include<stdio.h>

int main(){
int age;

printf("enter some age\n");
scanf("%d",&age);
char name[8];

printf("enter your name\n");
scanf("%s", &name);

printf("entered name is  %s", name);

printf("\n your age is  %d", age);
return 0;
}