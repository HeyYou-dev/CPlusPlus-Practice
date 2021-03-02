#include <iostream>
using namespace std;
void AllpossibleSubArray(int[], int);
int main(int argc, char **argv)
{
    int Array[] = {1, -2, -3};
    int len = sizeof(Array) / sizeof(int);
    AllpossibleSubArray(Array, len);
    return 0;
}
void AllpossibleSubArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {

        for (int j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {

                cout << array[k];
            }

            cout << '\n';
        }
    }
}