#include <bits/stdc++.h>
using namespace std;
//BinarySearch
int main() {
int arr[n];
int count =0;
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
int tar;
cin>>tar;
int pos;
int st=0; int end = n-1; int mid;
for(int i=0;i<10;i++)
{ mid = (st +end)/2;
  if(tar == arr[mid])
  {
      pos = mid+1;
      count =1;
      break;
  }
  else if(tar> arr[mid])
  st = mid +1;
  else
  end = mid -1;
}
if(count !=0)
cout<<"Fount at"<<" "<<pos;
else
cout<<"Not Found";

}