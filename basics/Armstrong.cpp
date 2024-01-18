#include<iostream>
using namespace std;
int main(){
    int n , orgnumber , remainder,result = 0;
    cout << "Enter three integer:" << endl;;
    cin >> n;
    orgnumber =  n;
    while (orgnumber > 0)
    {
        remainder = orgnumber % 10;
       orgnumber = orgnumber / 10;
       result += remainder * remainder * remainder;
    }
    if (result == n)  
    cout << "THE ENTERED NUMBER IS ARMSTRONG NUMBER : " << n << endl;
    else
     cout << " NOT AN ARMSTRONG NUMBER" << n << endl;;

    return 0;
}   