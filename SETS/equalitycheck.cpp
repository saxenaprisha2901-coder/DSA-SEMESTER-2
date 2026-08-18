#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s1,s2;

    int n,m;

    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s1.insert(x);
    }

    cin>>m;

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        s2.insert(x);
    }

    if(s1==s2)
        cout<<"Equal";
    else
        cout<<"Not Equal";
}