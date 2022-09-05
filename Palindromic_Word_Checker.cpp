#include <iostream>
using namespace std;
int main()
{
    char arr[100];
    cin >> arr;
    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }

    int fact = (len + 1) / 2, i = 0;

    while (i < fact)
    {
        if (arr[i] != arr[len - (i + 1)])
        {
            cout << "No Palindrome" << endl;
            return 0;
        }
        i++;
    }
    cout << "Yes Palindrome" << endl;

    return 0;
}