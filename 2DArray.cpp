#include <iostream>
using namespace std;
void brsearch()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == target)
            {
                found = true;
            }
        }
    }
    if (found)
    {
        cout << "element found ";
    }
    else
    {
        cout << "element does not exit";
    }
}
void search()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    bool found = false;
    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "element found ";
    }
    else
    {
        cout << "element does not exit";
    }
    //     3 3
    // 1
    // 1 2 3
    // 4 5 6
    // 7 8 9
}
void print2d(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void multi()

{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    //     3 4 3
    // 2 4 1 2
    // 8 4 3 6
    // 1 7 9 5
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // 4 5 6
}
void transpose(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    print2d(a);
}
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // transpose(a);
    // multi();
    // search();
    brsearch();
}
