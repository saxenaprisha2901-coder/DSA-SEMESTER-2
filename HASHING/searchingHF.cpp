#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;

    int hashTable[size][1];

    // initialize
    for(int i = 0; i < size; i++) {
        hashTable[i][0] = -1;
    }

    int n;
    cin >> n;

    // insertion
    for(int i = 0; i < n; i++) {
        int key;
        cin >> key;

        int hashCode = key % size;

        hashTable[hashCode][0] = key;
    }

    // search
    int searchKey;
    cin >> searchKey;

    int hashCode = searchKey % size;

    if(hashTable[hashCode][0] == searchKey) {
        cout << "Key Found" << endl;
    }
    else {
        cout << "Key Not Found" << endl;
    }

    return 0;
}