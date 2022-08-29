#include <iostream>
// #include<math.h>
//#include<conio.h>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Eter the size of the array ";
    cin >> n;
    int a[n];
    cout << "enter the element of the array ";
    cout << "\n";
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
    int minidx = 99999;
    for (int i = 0; i < n; i++)
    {
        int in = a[i];
        for (int j = 0; j < n; j++)
        {
            if (a[j] == in)
            {
                idx[a[j]] = min(i, j);
            }
        }
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]); // min(minidx,
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minidx == 99999)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
    return 0;
}