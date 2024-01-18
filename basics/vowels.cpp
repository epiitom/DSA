#include<iostream>
using namespace std;
int  main(){
    char c;
    bool  lower_case , Upper_case;
    cout<<"Enter the character :";
    cin>>c;
    lower_case = (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u');
    Upper_case = (c == 'A'|| c =='E' || c == 'I' || c == 'O' || c == 'U');
    if(!isalpha(c))
    cout<<"Error not an alphabet";
    else if (lower_case|| Upper_case)
    cout << c << ": is vowel";
    else
    cout<< c << ": is constant";
    return 0;
    
    
}