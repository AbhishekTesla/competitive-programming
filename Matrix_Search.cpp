#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    const int N = 1000000;
    int v[N];
    for (int i = 0; i < N; i++)
    {
        v[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            v[a[i][j]] = 1;
        }
    }

    int key, i = 0;
    cin >> key;

    while (i < N)
    {
        if (v[key] == 1)
        {
            cout << "Found";
            return 0;
        }
        i++;
    }

    cout << "Not found";

    return 0;
}