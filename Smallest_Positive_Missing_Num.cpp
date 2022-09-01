#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1000000;

    int v[N];
    for (int i = 0; i < N; i++)
    {
        v[i] = -1;
    }

    int j = 0, mx = INT_MIN, mn = INT_MAX;
    while (j < n)
    {

        if (a[j] >= 0)
        {
            v[a[j]] = 1;
            mx = max(mx, a[j]);
            mn = min(mn, a[j]);
        }

        j++;
    }

    for (int i = mn; i <= mx; i++)
    {
        if (v[i] != 1)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}