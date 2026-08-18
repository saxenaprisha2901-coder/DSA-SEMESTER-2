#include <bits/stdc++.h>
using namespace std;

struct Node{
    int coeff;
    int power;
    Node* next;
};

int main() {

    int n;
    cin >> n;

    Node *head=NULL, *temp, *newNode;

    for(int i=0; i<n; i++){

        newNode = new Node();

        cin >> newNode->coeff >> newNode->power;

        newNode->next = NULL;

        if(head==NULL){
            head = newNode;
        }
        else{
            temp = head;

            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    temp = head;

    while(temp != NULL){

        cout << temp->coeff << "x^" << temp->power;

        temp = temp->next;

        if(temp != NULL)
            cout << " + ";
    }

    return 0;
}