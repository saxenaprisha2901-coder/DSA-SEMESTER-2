#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    set<int> s1,s2,result;

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

    set_intersection(s1.begin(),s1.end(),
                     s2.begin(),s2.end(),
                     inserter(result,result.begin()));

    for(auto x:result)
        cout<<x<<" ";
}