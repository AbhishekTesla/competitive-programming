#include <iostream>
using namespace std;

int main()
{
    int array[100], ans[10], factor, size, i, j, k = 0, sum;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    factor = size * (size + 1) / 2;

    cout << "Enter the elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < size; i++)
    {
        sum = 0;
        for (j = i; j < size; j++)
        {
            sum = sum + array[j];
            ans[k] = sum;
            k++;
        }
    }

    cout << "Sum of subarray" << endl;

    for (i = 0; i < factor; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}