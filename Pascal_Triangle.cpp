#include <iostream>

using namespace std;

int fact(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int r;
    int ans;

    cout << "Enter the number of rows" << endl;
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i - j) == 0)
                cout << fact(i) / ((fact(1) * fact(j))) << " ";
            else
                cout << fact(i) / ((fact(i - j) * fact(j))) << " ";
        }
        cout << endl;
    }

    return 0;
}