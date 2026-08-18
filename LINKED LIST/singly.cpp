#include <bits/stdc++.h>
using namespace std;

class node
{
    public :
    node *link;
    int info;
    
    node(int val)
    {
        info = val;
        link = NULL;
    }
};
node* create_node(int val)
{
    
   node *ptr = new node(val);
   //class_name object_name = new constructor.
    return ptr;
}
node* create_list()
{
    int val,ch;  //choice
    cin>>val;
    node *ptr, *nptr, *start;
    ptr = create_node(val);
    start = ptr;
    cin>>ch;
    while(ch==1)
    {
        cin>>val;
        nptr = create_node(val);
        ptr->link = nptr;
        ptr = nptr;
        cin>>ch;
    }
    return start;
}
void traverse(node *start)
{ node *temp = start;
     while(temp !=NULL)
    {
    if(temp->link == NULL)
    {cout<<temp->info;}
    else
    {cout<<temp->info<<"->";}
    temp = temp->link;
    }
 }
bool search(node *head, int key)
{
    node *temp = head;
    while(temp->link != NULL)
    {
        if(temp->info == key)
        return true;
        else
        temp = temp->link;
    }
    return false;
}
// begin, end, point, value
node* insertion_begin(node *&head)
{
    int val;
    cin>>val;
    node *temp;
    temp = create_node(val);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->link = head;
        head = temp;
    }
    return head;
}
node* insertion_end(node *head)
{
    int val;
    cin>>val;
    node *nptr;
    nptr = create_node(val);
    if(head == NULL)
    {
        head = nptr;
        return head;
    }
    node *temp = head;
    while(temp->link!=NULL)
    {
        temp = temp->link;
    }
    temp->link = nptr;
    return head;
}
node* insertion_point(node *&head, int pos)
{
    int val;
    cin>>val;
    node *nptr;
    nptr = create_node(val);
    node *temp = head;
    if(pos<0)
    {cout<<"Inavlid Position";}
    if(pos == 0)
    {
        if(head == NULL)
     {
        head = temp;
        }
        else
        {
        temp->link = head;
        head = temp;
     }
        return head;
    }
   
    for(int i=0;i<pos-1;i++)
    {
        if(temp == NULL)
        {
            cout<<"Invalid";
            return head;
        }
        temp = temp->link;
    }
        nptr->link = temp->link;
        temp->link = nptr;
        return head;
    
}
node* insertion_value(node *&head, int key)
{
    int val;
    cin>>val;
    node *nptr;
    nptr = create_node(val);
    node *temp = head;
    if(head == NULL)
    {
        head = nptr;
    }
    while(temp != NULL && temp->info != key)
    {
        temp = temp->link;
    }
    nptr->link = temp->link;
    temp->link = nptr;
    return head;
    }
node* delete_beg(node *&head)
{
    node *temp = head;
   if(head == NULL)
   {
       cout<<"List is Empty";
       return head;
   }
   else
   {
       head = head->link;
       temp->link = NULL;
       delete temp;
   }
   return head;
   
    }
node* delete_end(node *head)
 {
    
     node *temp = head;
     if(head == NULL)
     { cout<<"LL is Empty";}
     else
     {
         while(temp->link->link != NULL)
         { temp = temp->link;}
         delete temp->link;
         temp->link = NULL;
         return head;
     }
 }
node* delete_point(node *head, int pos)
 {
     
     node *temp = head;
     if(head == NULL)
     {cout<<"LL is Empty";
     return head;}
     for(int i=0;i<pos-1;i++)
     {
         if(temp == NULL)
         {
             cout<<"Invalid";
             return head;
         }
         temp = temp->link;
     }
     node *temp2 = temp->link;
     if(temp2 == NULL)
     {
         cout<<"LL is Empty";
         return head;
     }
     temp->link = temp2->link;
     delete temp2;
     return head;
    }
node* delete_value(node *head, int value)
 {
     
     node *temp = head;
     if(head == NULL)
     {cout<<"LL is Empty";
     return head;}
     while(temp !=NULL && temp->info != value)
     {
         temp = temp->link;
     }
     node *temp2 = temp->link;
     temp->link = temp2->link;
     temp2->link = NULL;
     delete temp2;
     return head;
    }

int main() {
node *start;
start = create_list();
traverse(start);
cout<<endl;
int key;
cin>>key;
if(search(start, key))
cout<<"Element Found";
else
cout<<"Element Not Found";
cout<<endl;
insertion_begin(start);
traverse(start);
insertion_end(start);
traverse(start);
int pos;
cin>>pos;
insertion_point(start, pos);
traverse(start);
int tar;
cin>>tar;
insertion_value(start, tar);
traverse(start);
delete_beg(start);
traverse(start);
delete_end(start);
traverse(start);
delete_point(start,3);
traverse(start);
delete_value(start, 2);
traverse(start);
}