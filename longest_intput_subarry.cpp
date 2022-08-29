#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int curr = 2, ans = 2;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pd = a[0] - a[1];
    // for (int i = 0; i < n; i++)
    // {
    for (int j = 2; j < n; j++)
    {
        // int pd = a[j] - a[j - 1];
        if (pd == a[j] - a[j - 1])
        {
            curr = curr + 1;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }

    // }

    cout << ans;
}
// 7
// 10 7 4 6 8 10 11
// question ask in the google kickstart