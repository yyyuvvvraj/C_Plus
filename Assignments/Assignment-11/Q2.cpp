#include <iostream>
#include <list>
using namespace std;

void displayList(const list<int>& lst) {
    cout << "Elements in the linked list:" << endl;
    for (int num : lst) {
        cout << num << endl;
    }
}

int main() {
    list<int> linkedList;

    
    linkedList.push_back(10);
    linkedList.push_back(20);
    linkedList.push_back(30);
    linkedList.push_back(40);
    linkedList.push_back(50);

   
    displayList(linkedList);

    return 0;
}
