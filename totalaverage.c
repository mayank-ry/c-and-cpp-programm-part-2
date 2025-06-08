#include<stdio.h>
int main(){
    float hindi,english,math,science,total,average;
    printf("enter marks of hindi : ");
    scanf("%f",&hindi);
    printf("enter marks of english : ");
    scanf("%f",&english);
    printf("enter marks of math : ");
    scanf("%f",&math);
    printf("enter marks of science : ");
    scanf("%f",&science);
    total=hindi+english+math+science;
    printf("total marks are :%f\n",total);
    average=total/4;
    printf("average mark is :%f",average);
    return 0;


}