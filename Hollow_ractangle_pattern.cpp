#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col;

    cout << "Enter the number of rows and column" << endl;
    cin >> row >> col;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {

            if (i == 1 || i == row)
                cout << "*"
                     << " ";
            else if (j == 1 || j == col)
                cout << "*"
                     << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}