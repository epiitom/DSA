#include<iostream>
using namespace std;
int main(){
    int quotient , remainder,dividend,divisor;
    cout<<"Enter dividend:";
    cin>>dividend;
    cout<<"Enter divisor:";
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<< "Quotient:" << quotient  <<  "Remainder:"<<  remainder;
    return 0;
}

