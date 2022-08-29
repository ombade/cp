#include <iostream>
using namespace std;
int br()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int J = 0; J < n; J++)
        {
            if (a[i] > a[J])
            {
                rc = a[i];
            }
        }
    }
    cout << rc;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
}
// 8
// 1 2 0 7 2 0 2 2