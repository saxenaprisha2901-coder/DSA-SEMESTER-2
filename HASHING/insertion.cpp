//country(key) and population(value) example
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>CountryDatabase;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string key;
        int value;
        cin>>key>>value;

        CountryDatabase[key]=value;
    }

    for(auto x:CountryDatabase){
        cout<<x.first<<":"<<x.second<<endl;
    }
    return 0;
}

//student(value) and rollno.(key) example
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<int, string>StudentDatabase;
	
	int n;
	cin>>n;
	
	for(int i=0; i<n ; i++){
	    int key;
	    string value;
	    cin>>key>>value;
	    
	    StudentDatabase[key]=value;
	}
	
	for(auto x:StudentDatabase){
	    cout<<x.first<<":"<<x.second<<endl;
	}
    return 0;
}
