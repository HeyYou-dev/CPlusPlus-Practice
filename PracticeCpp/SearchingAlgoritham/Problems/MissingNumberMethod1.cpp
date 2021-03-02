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
    int array[] = {5, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Missing Number is = " << MissingNumber(array, size);
    return 0;
}

// Time complexicity O(n) sum method , not great performance wise
int MissingNumber(int array[], int size)
{

    int sum = ((size + 1) * (size + 2)) / 2;

    for (int i = 0; i < size; i++)
    {
        sum = sum - array[i];
    }

    return sum;
}
