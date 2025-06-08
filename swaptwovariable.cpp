#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    cout<<"before swap a= "<<a<<"and b= "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swap a= "<<b<<"and b= "<<b<<endl;
    return 0;
}