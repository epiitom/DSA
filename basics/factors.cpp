#include<iostream>
using namespace std;
int main() {
    int n , i;
    cout << "Enter the integer :";
    cin >> n;
    cout << "factors of "<< n << "are :";
    for (int i = 1; i <= n; i++)
    { 
        if(  n % i == 0)
        cout << i << ",";
    }
    return 0;
                                                                                                                                                                                                                                                                                                                                                 
}