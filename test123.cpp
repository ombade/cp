#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout << "Enter the size of the array";
    cin >> n;
    int a[n];
    // cout << "enter the element of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // n = 5;
    // int a[n] = {1, 2, 3, 4, 3};
    const int N = 1000;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = 999;
    for (int i = 0; i < n; i++)
    {

        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minidx == 999)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx << endl;
    }

    return 0;
}