#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;

    int hashTable[size];

    // Existing hash table
    for(int i = 0; i < size; i++) {
        cin >> hashTable[i];
    }

    // New key to insert
    int key;
    cin >> key;

    int hashCode = key % size;

    hashTable[hashCode] = key;

    cout << "Key inserted at index " << hashCode << endl;

    cout << "\nUpdated Hash Table:\n";

    for(int i = 0; i < size; i++) {
        cout << i << " : " << hashTable[i] << endl;
    }

    return 0;
}