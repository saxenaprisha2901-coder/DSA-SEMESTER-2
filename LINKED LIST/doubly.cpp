#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int info;
    node *prev, *next;

    node(int val) {
        info = val;
        prev = NULL;
        next = NULL;
    }
};

node* create_node(int val) {
    return new node(val);
}

node* create_list() {
    int val, ch;
    cin >> val;
    node *start = create_node(val);
    node *ptr = start;
    cin >> ch;
    while (ch == 1) {
        cin >> val;
        node *nptr = create_node(val);
        ptr->next = nptr;
        nptr->prev = ptr;
        ptr = nptr;
        cin >> ch;
    }
    return start;
}

void traverse(node *start) {
    node *temp = start;
    while (temp != NULL) {
        cout << temp->info;
        if (temp->next != NULL) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(node *head, int key) {
    node *temp = head;
    while (temp != NULL) {
        if (temp->info == key) return true;
        temp = temp->next;
    }
    return false;
}

// Insertion at beginning
node* insertion_begin(node *&head) {
    int val; cin >> val;
    node *nptr = create_node(val);
    if (head == NULL) {
        head = nptr;
    } else {
        nptr->next = head;
        head->prev = nptr;
        head = nptr;
    }
    return head;
}

// Insertion at end
node* insertion_end(node *head) {
    int val; cin >> val;
    node *nptr = create_node(val);
    if (head == NULL) return nptr;

    node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = nptr;
    nptr->prev = temp;
    return head;
}

// Insertion at position
node* insertion_point(node *&head, int pos) {
    int val; cin >> val;
    node *nptr = create_node(val);
    if (pos == 0) return insertion_begin(head);

    node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) temp = temp->next;
    if (temp == NULL) {
        cout << "Invalid Position\n";
        return head;
    }
    nptr->next = temp->next;
    nptr->prev = temp;
    if (temp->next != NULL) temp->next->prev = nptr;
    temp->next = nptr;
    return head;
}

// Insertion after value
node* insertion_value(node *&head, int key) {
    int val; cin >> val;
    node *nptr = create_node(val);
    node *temp = head;
    while (temp != NULL && temp->info != key) temp = temp->next;
    if (temp == NULL) {
        cout << "Key not found\n";
        return head;
    }
    nptr->next = temp->next;
    nptr->prev = temp;
    if (temp->next != NULL) temp->next->prev = nptr;
    temp->next = nptr;
    return head;
}

// Delete at beginning
node* delete_beg(node *&head) {
    if (head == NULL) {
        cout << "List Empty\n";
        return head;
    }
    node *temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    delete temp;
    return head;
}

// Delete at end
node* delete_end(node *head) {
    if (head == NULL) {
        cout << "List Empty\n";
        return head;
    }
    node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    if (temp->prev != NULL) temp->prev->next = NULL;
    else head = NULL;
    delete temp;
    return head;
}

// Delete at position
node* delete_point(node *head, int pos) {
    if (head == NULL) {
        cout << "List Empty\n";
        return head;
    }
    node *temp = head;
    for (int i = 0; i < pos && temp != NULL; i++) temp = temp->next;
    if (temp == NULL) {
        cout << "Invalid Position\n";
        return head;
    }
    if (temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;
    delete temp;
    return head;
}

// Delete by value
node* delete_value(node *head, int value) {
    node *temp = head;
    while (temp != NULL && temp->info != value) temp = temp->next;
    if (temp == NULL) {
        cout << "Value not found\n";
        return head;
    }
    if (temp->prev != NULL) temp->prev->next = temp->next;
    else head = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;
    delete temp;
    return head;
}

int main() {
    node *start = create_list();
    traverse(start);

    int key; cin >> key;
    cout << (search(start, key) ? "Element Found\n" : "Element Not Found\n");

    insertion_begin(start); traverse(start);
    insertion_end(start); traverse(start);

    int pos; cin >> pos;
    insertion_point(start, pos); traverse(start);

    int tar; cin >> tar;
    insertion_value(start, tar); traverse(start);

    delete_beg(start); traverse(start);
    delete_end(start); traverse(start);

    delete_point(start, 3); traverse(start);
    delete_value(start, 2); traverse(start);
}