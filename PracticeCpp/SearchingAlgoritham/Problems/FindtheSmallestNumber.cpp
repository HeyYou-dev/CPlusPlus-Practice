#include <iostream>
using namespace std;
int smallestNumber(int[], int);
int main(int argc, char **argv)
{
    int small;
    int array[] = {9, 1, 8, 0, 3, 7, 5, 4, 2, 6};
    int size = sizeof(array) / sizeof(array[0]);
    small = smallestNumber(array, size);
    cout << "Smallest Number is " << small << endl;
    return 0;
}


// Best solution can be said in O(n) TM && 
int smallestNumber(int array[], int size)
{

    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}