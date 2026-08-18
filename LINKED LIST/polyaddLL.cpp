#include <bits/stdc++.h>
using namespace std;

struct Node {
    int coeff;
    int power;
    Node* next;
};

void display(Node* head) {

    while (head != NULL) {

        cout << head->coeff << "x^" << head->power;

        if (head->next != NULL)
            cout << " + ";

        head = head->next;
    }
}

int main() {

    int n;
    cin >> n;

    Node *head1 = NULL, *head2 = NULL, *result = NULL;
    Node *temp, *newNode;

    // First Polynomial
    for (int i = 0; i < n; i++) {

        newNode = new Node();

        cin >> newNode->coeff >> newNode->power;
        newNode->next = NULL;

        if (head1 == NULL) {
            head1 = newNode;
        }
        else {

            temp = head1;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Second Polynomial
    for (int i = 0; i < n; i++) {

        newNode = new Node();

        cin >> newNode->coeff >> newNode->power;
        newNode->next = NULL;

        if (head2 == NULL) {
            head2 = newNode;
        }
        else {

            temp = head2;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    Node *p = head1;
    Node *q = head2;

    while (p != NULL && q != NULL) {

        newNode = new Node();

        newNode->coeff = p->coeff + q->coeff;
        newNode->power = p->power;
        newNode->next = NULL;

        if (result == NULL) {
            result = newNode;
        }
        else {

            temp = result;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        p = p->next;
        q = q->next;
    }

    cout << "Result Polynomial:\n";
    display(result);

    return 0;
}