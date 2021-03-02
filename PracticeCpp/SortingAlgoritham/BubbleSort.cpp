#include <iostream>

using namespace std;

void bubbleSort(int array[], int size)
{
    int comp = 0, swap = 0;

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - 1; j++)
        {
            comp++;
            if (array[j] > array[j + 1])
            {
                int temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;

                swap++;
            }
        }
    }

    cout << "comparison"
         << "=" << comp << endl
         << "Total Swap"
         << "=" << swap << endl;
}

void printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ',';
    }

    cout << '\n';
}

// Driver code main funnction

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);
    cout << "Sorted Array are" << endl;

    printArray(array, size);
}
