#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> Myvector;
    Myvector.push_back(1);
    Myvector.emplace_back(2);
    Myvector.push_back(3);

    cout << "Vector elements:";
    for(int i = 0; i < Myvector.size(); ++i) {
        cout << Myvector[i] << " ";
    }

    // Modify 1 by 4
    Myvector[1] = 4;

    cout << "\nVector using iterators: ";
    for (auto it = Myvector.begin(); it != Myvector.end(); ++it) {
        cout << *it << " ";
    }

    cout << "\nVector size: " << Myvector.size() << endl;
    Myvector.pop_back();

    return 0;
}
