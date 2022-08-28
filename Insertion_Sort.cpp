#include <iostream>
using namespace std;

void Insertion_Sort(int array[], int size)
{
    int val, i, j;

    for (i = 1; i < size; i++)
    {
        val = array[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (val < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = val;
    }

    cout << "Sorted Elements are : " << endl;

    for (i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int array[100], size, i;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    cout << "Enter the elements : " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    Insertion_Sort(array, size);

    return 0;
}