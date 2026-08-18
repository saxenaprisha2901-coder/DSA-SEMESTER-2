//ordered
#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> mp;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string key;
        int value;

        cin>>key>>value;

        mp[key]=value;
    }

    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}

//unordered
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> mp;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string key;
        int value;

        cin>>key>>value;

        mp[key]=value;
    }

    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}