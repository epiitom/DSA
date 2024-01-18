#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any interger : " << endl;
    cin >> n;

    int n1 = 0;
    int n2 = 1;
    int nextterm = 0;
    cout <<"fibonnaci sequence " << endl;
    cout << n1 << " " << n2 << " ";
    
    for(int i = 2; i <= n; i++) {
        nextterm = n1 + n2;
        cout << nextterm << " ";
        
        n1 = n2;
        n2 = nextterm;
    }  
    return 0;

}