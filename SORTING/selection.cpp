#include <bits/stdc++.h>
using namespace std;

int main() {
int arr[10];
int n=10;
//Selection Sort
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
for(int i =0;i<n-1;i++)
{
    int si = i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j] < arr[si])
        {
            si = j;
        }
    }
   
    int temp = arr[i];
    arr[i] = arr[si];
    arr[si] = temp;
        
}

for(int i=0;i<10;i++)
{
    cout<<arr[i]<<" ";
}

}