#include<iostream>
using namespace std;
int main(){
    int n,remainder,revnumber=0;
    cout <<"Enter the integer:";
    cin >> n;
    while ( n > 0)
    {
        remainder = n % 10;
        n =  n / 10;
        revnumber = revnumber * 10 + remainder;
    }
    cout << "reverse number = "<< revnumber;
    return 0;
}