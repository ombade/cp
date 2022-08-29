#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Eter the size of the array";
    cin >> n;
    int a[n];
    cout << "enter the element of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1000000;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = 99999999;
    for (int i = 0; i < n; i++)
    {

        if (idx[a[i]] != -1)
        {
            minidx = idx[a[i]]; // min(minidx,
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minidx = 9999999)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}