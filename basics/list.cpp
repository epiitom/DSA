#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> myList;

    myList.push_back(12);
    myList.emplace_back(13);
    myList.push_back(14);

   cout << "List elements :";
   for (const int& value : myList)
   {
    cout << value << " ";
   }

   list<int>:: iterator it = myList.begin();
   advance(it,1);
   *it = 4;   
     it = myList.begin();
    std::advance(it, 2);  // Move the iterator to the third element
    myList.insert(it, 5);

    
    std::cout << "\nModified list: ";
    for (const int& value : myList) {
        std::cout << value << " ";

            // Remove an element
    myList.pop_back();

    // Check if the list is empty
    if (myList.empty()) {
        std::cout << "\nList is empty." << std::endl;
    } else {
        std::cout << "\nList is not empty." << std::endl;
    }


   return 0;
}
}