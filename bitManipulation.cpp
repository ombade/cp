#include <string>
#include <iostream>

using namespace std;
void binaryTOdeci(int n)
{
    int num = n;
    int Dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        Dec_value += last_digit * base;
        base = base * 2;
    }
    cout << Dec_value;
}
void deciTobinary(int num)
{
    int a[40];
    if (num == 0)
    {
        cout << "0" << endl;
    }
    int i = 0;
    while (num > 0)
    {
        a[i] = (num % 2);
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    cout << endl;
}
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (i << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
bool powerOf2(int n)
{
    if (n == 0)
        return n;
    else
    {
        return (!(n & n - 1));
    }
}
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int getbit(int num, int pos)
{
    // this is the function for the get the postion of the bit at the peraticuer postion in the binary form
    // basically this function takes the number
    int a = 1 << pos;        // this line basically gives the  1 at that particully postion and other zeo
    return ((num & a) != 0); // this line compare the postion to the 1 ad git th rersult 1 0r 0 bitwise and oper is used to comare the bit of the binary numberws
}
int setbit(int num, int pos)
{
    // this function set the bit to 1 at the given postion by the user
    int a = 1 << pos; // this line basically set the postion to 1 and other to zero at int a
    int b = num | a;  // this line basically use biswise or operater to and set 1 to given postion
    return b;
}
int clearbit(int num, int pos)
{

    // this function is use to set bit to 0 at the given postion
    int a = ~(1 << pos); // this line give the 1 to all postion beside the postion
    int b = num & a;     // this line basically use biswise and operater to postion to zero
    return b;
}
int upadate(int num, int pos, int value)
{
    int a = ~(1 << pos); // this line give the 1 to all postion beside the postion
    int ba = num & a;
    int a2 = value << pos;
    return (ba | a2);
}
int main()
{
    // cout << upadate(5, 1, 1);
    // binaryTodec(7);
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << i << endl;
    //     deciTobinary(i);
    // }

    // binaryTOdeci(000);
    // cout << powerOf2(16);
    // int a[] = {1, 2, 3, 4};
    // subset(a, 4);
    // cout << (0 << 1);
    // int arr[] = {2, 4, 3, 4, 6, 3};
    // cout << unique(arr, 6);
    cout << numberofones(7);
    return 0;
}