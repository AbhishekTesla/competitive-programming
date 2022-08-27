#include <iostream>
using namespace std;
int main()
{
    int size, i, factor, j = 1, temp, array[100];
    

    cout << "Enter the size of array : " << endl;
    cin >> size;
    factor = size / 2;

    cout << "Enter the elemants : " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    while (j <= factor)
    {
        temp = array[j - 1];
        array[j - 1] = array[size - j];
        array[size - j] = temp;
        j++;
    }

    cout << "Reversed Array is " << endl;

    for (i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}