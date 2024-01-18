#include<iostream>
using namespace std;
int main(){
    int a=10,b=7,temp;
    cout<<"before swap:";
    cout<<"a= "<<a<< "\nb= "<<b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"\nafter swap:"<<endl;
    cout<< "a= " << a << "b= " << b <<endl;
    return 0;


}