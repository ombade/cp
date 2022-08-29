#include <stdio.h>
int main()
{
    int n, i;
    // printf("Enter the value of the arr");
    scanf("%d", &n);
    int a[n];
    // printf("enter the element of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    const int N = 12;
    int idx[N];
    for (i = 0; i < N - 1; i++)
    {
        idx[i] = -1;
    }
    int minidx = 999;
    for (i = 0; i < n; i++)
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
    if (minidx = 999)
    {
        printf("-1 \n");
    }
    else
    {
        printf("%d\n", minidx + 1);
    }
    return 0;
}