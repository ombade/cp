#include <iostream>
using namespace std;
int main()
{
    string temp = "";
    
    string test = "my name is om ";
    for (int i = 0; i < test.length(); i++)
    {

        if (test[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(test[i]);
        }
    }
    cout << temp << endl
         << test;
}