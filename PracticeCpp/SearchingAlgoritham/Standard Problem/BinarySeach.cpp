#include <iostream>
#include <cmath>
using namespace std;
int BinarySearch(int[], int, int, int);
int main(int argc, char **argv)
{

    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    int firt_index = 0;
    cout << "Enter the to be searched" << endl;
    cin >> key;
    cout << "Element " << key << " is found ? =>" << BinarySearch(array, firt_index, size - 1, key);
    return 0;
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

        else if (array[mid] > key)
        {
            return BinarySearch(array, mid + 1, last_index, key);
        }
        else
        {
            return BinarySearch(array, first_index, mid - 1, key);
        }
    }
}