/*
You are given a list of n - 1 integers and these integers are in the range of 1 to n.
There are no duplicates in the list.
One of the integers is missing in the list.
Write an efficient code to find the missing integer.
*/
#include <iostream>
using namespace std;
int MissingNumber(int[], int);
int main(int argc, char **argv)
{
    int array[] = {3, 6, 4, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Missing Number is = " << MissingNumber(array, size);
    return 0;
}

int MissingNumber(int array[], int size)
{
    int localArr[] = {0, 0, 0, 0, 0, 0};

    for (int i; i < size; i++)
    {
        localArr[array[i] % 6] = 1;
    }
    int j = 0;

    for (int j = 0; j < 6; j++)
    {
        if (localArr[j] == 0)
        {
            return j;
        }
    }
}