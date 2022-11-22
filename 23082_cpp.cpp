#include <bits/stdc++.h>
using namespace std;
/**
 * @brief balanced tri-nary
 *
 * @return int
 */
int main()
{
    long long int N = 0;
    int array[21] = {};
    scanf("%d", &N);
    if (N == 0)
    {
        printf("0");
    }
    else
    {

        for (int i = 0; i < 20; i++)
        {
            int k = N % 3;
            long long int remain = (N - k) / 3;
            N = remain;
            array[i] = array[i] + k;
            while (abs(array[i]) > 1)
            {
                if (array[i] >= 0)
                {
                    array[i + 1]++;
                    array[i] = array[i] - 3;
                }
                else if (array[i] < 0)
                {
                    array[i + 1]--;
                    array[i] = array[i] + 3;
                }
                // printf("9");
            }
        }
        int trinary[21] = {};
        int a = 20;
        int b = 0;
        while (array[a] == 0)
        {
            b++;
            a--;
        }
        for (int i = 0; i < 20; i++)
        {
            if (20 - (i + b) >= 0)
            {
                /* code */
                trinary[i] = array[20 - (i + b)];
            }
            else
            {
                trinary[i] = 9;
            }
        }
        for (int i = 0; i < 20; i++)
        {
            if (trinary[i] == -1)
            {
                printf("T");
            }
            else if (trinary[i] == 0)
            {
                printf("%d", 0);
            }
            else if (trinary[i] == 1)
            {
                printf("%d", 1);
            }
            else if (trinary[i] == 9)
            {
                printf("%d", 9);
            }
        }
    }

    return 0;
}