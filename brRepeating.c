#include <stdio.h>
int main()
{
    int size, i, j;

    priintf("Enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    int test[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        int count = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
            count = test[i];
        }
    }
    for (i = 0; i < size; i++)
    {
        if (test[i] < test[i + 1])
        {
            printf("%d", i);
        }
    }
    printf("This is the end of the program");
    return 0;
}