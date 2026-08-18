#include <iostream>
using namespace std;

void countSort(int arr[], int n, int exp)
{
    int output[100];
    int count[10] = {0};

    for(int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    for(int exp = 1; max / exp > 0; exp *= 10)
        countSort(arr, n, exp);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}