#include <iostream>
using namespace std;
int SecondSmallestNumber(int[], int);
int main(int argc, char **argv)
{
    int small;
    int array[] = {9, -1, 8, 3, 7, 5, 4, -2, 6};
    int size = sizeof(array) / sizeof(array[0]);
    small = SecondSmallestNumber(array, size);
    cout << "Smallest Number is " << small << endl;
    return 0;
}
// Best solution can be said in O(n) TM && O(1) SP
int SecondSmallestNumber(int array[], int size)
{
    int min = array[0];
    int second = array[0];

    // O(n)TM for finding minimum element
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    // O(n) TM for finding second smallest number
    for (int i = 0; i < size; i++)
    {
        if (array[i] > min)
        {
            if (second > array[i])
            {
                second = array[i];
            }
        }
    }
    return second;
}

/* Over all TM O(n) to find both minimum and secondminimum element in the array

Any Alternative solution ?=>Yes

what ? => Selection Sort

How ?=> In each pass of selection sort,  minimum element will be positioned at correct index  
        so to find the second smallest element , we need two pass of selection sort .
        then return array[1] . Because array[1] will contain second smallest element 

        Similier behaviour goes with bubble sort but there case would be maximum element

*/
