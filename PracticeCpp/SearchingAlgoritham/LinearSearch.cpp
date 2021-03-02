#include <iostream>
using namespace std;
int linearSearch(int[], int, int);
int main(int argc, char **argv)
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    int key;
    cout << "Enter the to be searched" << endl;
    cin >> key;
    cout << "Element " << key << " is found ? =>" << linearSearch(array, size, key);

    return 0;
}

int linearSearch(int array[], int size, int key)
{
    bool flag = false;

    for (int i = 0; i < size; i++)
    {

        if (array[i] == key)
        {
            flag = true;
        }
    }

    return flag;
}
