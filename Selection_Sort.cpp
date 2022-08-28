#include <iostream>
using namespace std;

void Selection_Sort(int array[], int size)
{
    int min, p, i, j, k;

    for (i = 0; i < size - 1; i++)
    {
        p = array[i];
        min = array[i + 1];
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                k = j;
            }
        }

        if (p > min)
        {
            array[k] = array[i];
            array[i] = min;
        }
    }

    cout << "Sorted Array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int array[100], size;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    Selection_Sort(array, size);

    return 0;
}