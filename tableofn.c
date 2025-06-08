#include<stdio.h>
int main(){
    int i=1,n,table;
    printf("enter number : ");
    scanf("%d", &n);
    while(i<=10){
        table=n*i;
        printf("%d\n",table);
        i++;
    }
    return 0;
}