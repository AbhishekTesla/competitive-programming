#include <iostream>

using namespace std;
int main()

{
    int i, j, space, n;

    cout << "Enter the value of n : " << endl;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        for (j = i; j >= 1; j--)
        {
            cout << "*"
                 << " ";
        }

        for (j = 2; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }  
    
    
    
    for (i = n; i>=1; i--)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        for (j = i; j >= 1; j--)
        {
            cout << "*"
                 << " ";
        }

        for (j = 2; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}