#include<stdio.h>
int main(){
    int i=1,sum=0;
    do{
        sum=sum+i, i++;
        printf("sum is %d" ,sum);
    }
    while(i<=10);
    return 0;
}