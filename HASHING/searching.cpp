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
    
    string searchkey;
    cin>>searchkey;

    if(CountryDatabase.find(searchkey) != CountryDatabase.end()){
        cout<<"key is present at "<<"Value = "<<CountryDatabase[searchkey];
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}
// 4
// India 10
// Pakistan 11
// China 12
// Nepal 13

// China

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
	
	int searchkey;
	cin>>searchkey;
	
	if(StudentDatabase.find(searchkey) != StudentDatabase.end()){
	    cout<<"key is present at "<< "Value = "<<StudentDatabase[searchkey]<<endl;
	}
	else{
	    cout<<"key is not present"<<endl;
	}
	return 0;
}
