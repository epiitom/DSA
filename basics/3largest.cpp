#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the integer :";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n2)
    cout<<n1<< " is largest :";
    else if(n2>=n1 && n2>=n3)
    cout << n2 << " is largest :";
    else 
    cout << n3 << " : is largest ";
    return 0;
}