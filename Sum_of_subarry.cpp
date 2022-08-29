#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[j];
            cout << sum << endl;
        }
    }

    return 0;
}
// 5
// 1 2 0 7 2