#include <iostream>
#include <cmath>
using namespace std;
int ExponentialSearch(int[], int, int, int);
int BinarySearch(int[], int, int, int);
int main(int argc, char **argv)
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    int firt_index = 0;
    cout << "Enter the to be searched" << endl;
    cin >> key;
    int index = ExponentialSearch(array, firt_index, size - 1, key);

    if (index != -1)
    {
        cout << "Element is fount at index " << index << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}

int ExponentialSearch(int array[], int first_index, int last_index, int key)
{
    if (array[first_index] == key) //means if array has one element
    {
        return first_index;
    }

    // Implement exponential search in the remaining n-1 except first element

    for (first_index = 1; first_index < last_index && array[first_index] <= key;)
    {

        if (array[first_index] == key)
        {

            return first_index;
        }

        first_index *= 2;
    }

    int abv = BinarySearch(array, first_index / 2, min(first_index, last_index), key);

    return abv;
}

int BinarySearch(int array[], int first_index, int last_index, int key)
{
    if (first_index == last_index)
    {
        if (array[first_index] == key)
        {
            return first_index;
        }

        else
        {
            return -1;
        }
    }
    else
    {
        int mid = ceil((first_index + last_index) / 2);

        if (array[mid] == key)
        {
            return mid;
        }

        if (array[mid] < key)
        {
            return BinarySearch(array, mid + 1, last_index, key);
        }
        else
        {
            return BinarySearch(array, first_index, mid - 1, key);
        }
    }
}