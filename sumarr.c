#include<stdio.h>
int main(){
  int a[10];
int i,sum;
printf("enter numbers to add");
for(i=0;i<10;i++){
  scanf("%d",&a[i]);
  
}
  for(i=0;i<10;i++){
    sum=sum+a[i];
  }
  printf("sum is : %d",sum)
    return 0;
  
}
