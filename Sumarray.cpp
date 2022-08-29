#include <iostream>
// using namespace Std;
using namespace std;
int main()
{
    int n, s;
    // int s = 12;

    // int a[n] = {1, 2, 3, 7, 5};
    int i = 0, st = -1, en = -1, sum = 0, j = 0;
    cin >> n;
    cin >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (j < n && sum <= s) //+ a[i]
    {
        sum = sum + a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i - 1;
            en = j - 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
}
