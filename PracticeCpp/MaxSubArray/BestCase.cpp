// using kadane algoitham we can find the maximum subarray in O(n) time

#include <iostream>
using namespace std;
int BestMaxSubArray(int[], int);
int main(int argc, char **argv)
{
    int Array[] = {1, 2, -1};
    int len = sizeof(Array) / sizeof(int);
    cout << BestMaxSubArray(Array, len);
    return 0;
}

int BestMaxSubArray(int array[], int len)
{
    int best = 0, sum = 0;

    for (int i = 0; i < len; i++)
    {

        sum = max(array[i], sum + array[i]);

        best = max(best, sum);
    }

    return best;
}