#include<iostream>
using namespace std;
int main(){
    int n1,n2,Hcf;
    cout << "Enter the two integer:";
    cin >> n1>> n2;

    if(n2 > n1){
        int temp = n2;
        n1 = n2;
        temp = n1;
    }
    for(int i = 1;i <= n2; ++i){
        if( n1%i == 0 && n2 % i == 0)
        Hcf = i;
    }
     cout<< "Hcf:"<< Hcf;
     return 0;
}