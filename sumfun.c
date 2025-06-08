#include<stdio.h>
int sum(){
    int a,b,c;
    printf("enter a and b : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is : %d",c);
    return 0;
}
int main(){
    sum();
    sum();
    sum();
    return 0;
}
