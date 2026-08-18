ASCENDING:-
set<int> s;
//output:-
for(auto x:s)
    cout<<x<<" ";

DESCENDING:-
    set<int,greater<int>> s;
    //output:-
    for(auto it=s.rbegin();it!=s.rend();it++)
    cout<<*it<<" ";