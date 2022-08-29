#include <stdio.h>
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, j, i;
    int sum = 0;
    cin >> n;
    cin >> s;
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = i; j < n; j++)
        {
            sum = sum + a[j];
        }
        if (sum == s)
        {
            cout << " " << i << endl
                 << j;
        }
    }

    // if (sum==0)
    // {
    //     /* code */
    // }

    // {
    //     cout << "-1";
    // }
    return 0;
}
// 5
// 12
// 1 2 3 7 5