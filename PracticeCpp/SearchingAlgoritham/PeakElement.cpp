#include <iostream>
#include <cmath>
using namespace std;
int *peakElement(int[], int, int, int);
int main(int argc, char **argv)
{

    int array[] = {1, 8, 7, 9, 6, 5, 4, 3, 2, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int firt_index = 0;
    int *a;
    a = peakElement(array, firt_index, size - 1, size);

    for (int *p = a; *p;)
    {
        cout << "PeakValue is " << *(p) << '\n';
        p = p + 2;
    }
    return 0;
}

int *peakElement(int array[], int first_index, int last_index, int size)
{
    static int peakNumber[10] = {0};
    int k;

    if (size == 1)
    {
        return array;
    }

    // If size of peak element is 2
    if (size == 2)
    {
        if (array[last_index] > array[last_index - 1])
        {
            peakNumber[first_index] = array[last_index];

            return peakNumber;
        }

        else
        {
            peakNumber[first_index] = array[last_index - 1];
            return peakNumber;
        }
    }
    // O(n) time complexicity

    for (int i = 1; i < size; i++)
    {

        if (array[i - 1] < array[i] && array[i] > array[i + 1])
        {
            k = i - 1;
            peakNumber[k] = array[i];

            cout << "peakNumber " << (i - 1) << " " << peakNumber[i - 1] << endl;
        }
    }

    return peakNumber;
}
