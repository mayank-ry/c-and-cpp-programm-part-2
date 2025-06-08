#include<stdio.h>
int main(){
    char a,e,i,o,u,A,E,I,O,U,ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    (ch==a|| ch==e|| ch==i|| ch==o|| ch==u ||
    ch==A|| ch==E|| ch==I|| ch==O|| ch==U) ? printf("%c is vowel\n",ch):
    printf("%c is Consonant ",ch);
    return 0; 


}