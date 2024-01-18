#include<iostream>
using namespace std;
int main(){
    int base , power , result = 1;
    cout << "Enter base and power:";
    cin >>  base >> power;
    cout<< base << "^"<< power << "=";
    while(power>0){
        result = result * base;
        --power;
    }
    cout << result;
    return 0 ;

}