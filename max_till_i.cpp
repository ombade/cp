#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ans = -199999999;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[i]);
        cout << ans << endl;
    }

    return 0;
}
// 6
// 0 -9 1 3 -4 5