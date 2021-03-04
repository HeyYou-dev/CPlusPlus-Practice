#include <iostream>
using namespace std;
int InterpolcaionSearch(int[], int, int);
int main(int argc, char **argv)
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    cout << "Enter the to be searched" << endl;
    cin >> key;
    int index = InterpolcaionSearch(array, size, key);

    (index != 1) ? cout << "Element found at index " << index : cout << "Element not found.";
    return 0;
}

int InterpolcaionSearch(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end && key >= array[end] && key <= array[start])
    {
        if (start == end)
        {
            if (array[start] == key)
                return start;
            return -1;
        }
        int pos = start + (((double)(end - start) / (array[end] - array[start])) * (key - array[start]));

        // Best case O(n)
        if (array[pos] == key)
        {
            return pos;
        }
        if (array[pos] > key)
        {
            end = pos - 1;
        }
        else
        {
            start = pos + 1;
        }
    }

    return -1;
}