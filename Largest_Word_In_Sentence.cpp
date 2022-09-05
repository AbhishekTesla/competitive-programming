#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();

    int currSize = 0, maxSize = 0;
    int i = 0;
    while (1)
    {

        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currSize > maxSize)
            {
                maxSize = currSize;
            }
            currSize=0;
        }
        else
            currSize++;
        if (a[i] == '\0')
            break;
        i++;
    }

    cout << maxSize << endl;

    return 0;
}