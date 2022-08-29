#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int j = 0, k = n - 1, val = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[j] = val;
            j++;
            val++;
        }
        else
        {
            arr[k] = val;
            k--;
            val++;
        }
    }
    
}

int main()
{
    int n, arr[100];
    cin >> n;
    arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}