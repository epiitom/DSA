#include <iostream>
using namespace std;

int main() {
    int n, num, digit, rev = 0;
    cout << "Enter the integer: ";
    cin >> num;
    n = num;

    do {
        digit = num % 10;
        rev = rev * 10 + digit;  // Accumulate the reversed digits here, not the entire number
        num = num / 10;
    } while (num > 0);

    cout << "The reverse number is: " << rev;

    if (n == rev)
        cout << "\nThe number is palindrome";
    else
        cout << "\nThe number is not palindrome";

    return 0;
}
