#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string,int> a,
         pair<string,int> b){

    return a.second < b.second;
}

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

    vector<pair<string,int>> v;

    for(auto x:mp){
        v.push_back(x);
    }

    sort(v.begin(),v.end(),cmp);

    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}