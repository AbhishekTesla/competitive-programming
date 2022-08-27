#include <iostream>
using namespace std;

int LinearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i + 1;
    }

    return -1;
}

int main()
{
    int array[10], key, i, size;
    cout << "Enter the size of an array : " << endl;
    cin >> size;

    cout << "Enter the elemants :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Enter elemant want to search : " << endl;
    cin >> key;

    int pos = LinearSearch(array, size, key);

    if (pos != -1)
        cout << "Elemant present at " << pos << " position" << endl;

    else
        cout << "Not present";

    return 0;
}