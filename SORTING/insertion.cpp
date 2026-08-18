#include <bits/stdc++.h>
using namespace std;
//Insertion Sort
int main() {
    int n;
    cin>>n;
	int temp, y;
	int arr[n];
	for(int i =0; i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=1;i<n;i++)
	{
	    temp = arr[i];
	    y = i-1;
	    while(temp < arr[y] && y>=0)
	    {
	        arr[y+1] = arr[y];
	        y = y-1;
	    }
	    y = y+1;
	    arr[y] = temp;
	}
	for(int i = 0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}

}