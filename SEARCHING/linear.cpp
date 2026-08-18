#include <bits/stdc++.h>
using namespace std;
//Linear Search
int main() {
int arr[10];
int count =0; int pos;
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
int tar;
cin>>tar;
for(int i=0;i<10;i++)
{
    if(tar == arr[i])
    {
        count =1;
        pos = i+1;
        break;
    }

    else
    continue;
}
if(count == 1)
cout<<"Found at"<<" "<<pos;
else
cout<<"Not Found";
}