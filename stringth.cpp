#include <iostream>
using namespace std;
#include <stdlib.h>
bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}
bool checkInclusion(string s1, string s2)
{
    // charater count array
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    // treverse s2 string in window of sizee s1 length and compare
    int i = 0;
    int windowsize = s1.length();
    int count2[26] = {0};
    // running for first window
    while (i < windowsize && i < s2.length())

    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // aage window process karo
    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;
        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]--;
        i++;
        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }

    return 0;
}
string removdOccurences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(string s)
{
    int count = 0;
    int i;
    int st = 0;
    int e = s.size() - 1;
    while (st <= e)
        if (s[st] != s[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    return 1;
}
int length(char name[])

{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count = count + 1;
    }
    // cout << "The length of the string is  " << count;
    return count;
}
char reverse(char string[], int n)
{
    // for (int i = n - 1; i == 0; i++)
    // {
    //     cout << string[i];
    //     cout << "The string is ";
    // }
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(string[e--], string[s++]);
    }
    cout << string;
    // return string;
}
int main()

{
    char string[50];
    // cout << "Enter your name " << endl;
    // cin >> string;
    // int len = length(string);
    // cout << isPalindrome(string);
    // char rev = reverse(string, len);
    // cout << removdOccurences("daabcbaabcbc", "abc")

    //      << endl
    //      << tolowercase('Q');
    // cout << endl
    //      << tolowercase('F');

    //
    // cout << "your name is " << rev;
    // cout << checkInclusion("ab", "eidbaoo");
    return 0;
}