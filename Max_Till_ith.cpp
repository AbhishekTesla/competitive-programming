#include <iostream>
using namespace std;

int main()
{
    int array[100], max[100], size, i, j, max_val;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    cout << "Enter the elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < size; i++)
    {
        max_val = array[0];

        for (j = 0; j <= i; j++)
        {
            if (max_val < array[j])
                max_val = array[j];
        }

        max[i] = max_val;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Max valu till " << i + 1 << " position is " << max[i] << endl;
    }

    return 0;
}