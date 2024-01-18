#include<iostream>
using namespace std;
int main() {
    int low,high,n;
      bool is_prime = true;
    cout << "Enter two integer : ";
    cin >> low >> high;
    cout << "\n prime numbers between: " << low << "and" << high << "are" << endl;

    while (low < high)
    {
        is_prime = true;
    
    if (low == 0 || low ==1)
    {
        is_prime = false;
    }
    for ( int i = 2; i < low/2; i++)
    {
        if (low % i == 0)
        {
            is_prime = false;
            break;
        }

    }
       if (is_prime)
       
        cout << low << ",";
        ++low;
             
    }
       return 0;
}