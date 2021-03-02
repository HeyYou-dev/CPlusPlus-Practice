#include <iostream>
#include <cmath>
using namespace std;
int JumpSearch(int[], int, int, int, int);
int main(int argc, char **argv)
{
    int array[] = {2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    int first_index = 0;
    cout << "Enter the to be searched" << endl;
    cin >> key;
    int index = JumpSearch(array, first_index, size - 1, size, key);
    if (index != -1)
    {
        cout << "Element found at Index " << index << endl;
    }
    else
    {
        cout << " Element not found" << endl;
    }
    return 0;
}

int JumpSearch(int array[], int first_index, int last_index, int size, int key)
{
    if (size == 1)
    {
        if (array[first_index] == key)
        {
            return first_index;
        }
        return -1;
    }

    // block pointer
    int block_pointer = 3;

    while (array[block_pointer] < key && block_pointer < size - 1)
    {
        first_index = block_pointer;
        block_pointer += 3;
        if (block_pointer > size - 1)
        {
            return -1;
        }
    }
    int x;
    for (x = first_index; x <= block_pointer; x++)
    {
        if (array[x] == key)
            break;
    }

    return x;
}