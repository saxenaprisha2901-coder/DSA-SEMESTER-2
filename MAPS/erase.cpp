//ordered
#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> CountryDatabase;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        string key;
        int value;

        cin>>key>>value;

        CountryDatabase[key] = value;
    }

    string deleteKey;
    cin>>deleteKey;

    CountryDatabase.erase(deleteKey);

    for(auto x:CountryDatabase){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}

//unordered
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> CountryDatabase;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        string key;
        int value;

        cin>>key>>value;

        CountryDatabase[key] = value;
    }

    string deleteKey;
    cin>>deleteKey;

    CountryDatabase.erase(deleteKey);

    for(auto x:CountryDatabase){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}