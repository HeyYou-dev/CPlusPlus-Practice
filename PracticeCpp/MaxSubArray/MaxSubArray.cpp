#include <iostream>
using namespace std;
int MaxSubarray(int[], int);

int main(int argc, char *argv[])
{
    int Array[] = {1, 2, 4, -3, 5, 2, 5, 2};

    int len = sizeof(Array) / sizeof(int);

    cout << len;

    cout << MaxSubarray(Array, 8);
    return 0;
}

int MaxSubarray(int array[], int len = 9)
{
    int best = 0;

    for (int i = 0; i <= 8; i++)
    {
        for (int j = i; j <= 8; j++)
        {
            int sum = 0;

            //trace array with single subArray
            for (int k = j; k <= 8; k++)
            {
                sum += array[k];
                cout << array[k];
            }

            cout << '\n';
            best = max(best, sum);
        }
    }

    return best;
}