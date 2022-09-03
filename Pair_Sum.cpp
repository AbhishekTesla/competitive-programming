#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int low = 0, high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] < k)
        {
            low++;
        }

        else if (a[low] + a[high] > k)
        {
            high--;
        }

        else if (a[low] + a[high] == k)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}