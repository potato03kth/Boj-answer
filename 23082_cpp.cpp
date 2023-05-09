#include <bits/stdc++.h>
using namespace std;
/**
 * @brief balanced tri-nary
 *
 * @return int
 */
int main()
{
    long N = 0;
    int array[25] = {};
    scanf("%d", &N);
    if (N == 0)
    {
        printf("0");
    }
    else
    {

        for (int i = 0; i < 24; i++)
        {
            int k = N % 3;
            long remain = (N - k) / 3;
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
        int trinary[25] = {};
        int a = 24;
        int b = 0;
        while (array[a] == 0)
        {
            b++;
            a--;
        }
        for (int i = 0; i < 24; i++)
        {
            if (24 - (i + b) >= 0)
            {
                /* code */
                trinary[i] = array[24 - (i + b)];
            }
            else
            {
                trinary[i] = 9;
            }
        }
        for (int i = 0; i < 24; i++)
        {
            if (trinary[i] == -1)
            {
                printf("T");
            }
            else if (trinary[i] == 0)
            {
                printf("0");
            }
            else if (trinary[i] == 1)
            {
                printf("1");
            }
        }
    }

    return 0;
}

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int remain = 0;
//     int key = 0;
//     long long int result = 0;
//     float k = log(N) / log(3);
//     printf("%f", k);
//     printf("\n");
//     for (int i = 0; i < ceil(k); i++)
//     {
//         key = N % 3;
//         N = (N - key) / 3;

//         result = result + key * pow(10, i);
//         printf("%lld", result);
//         printf("\n");
//         printf("%d", key);
//         printf("\n");
//         printf("\n");
//         // printf("%x", k);
//         // printf("\n");
//     }
//     // printf("%d", result);

//     return 0;
// }