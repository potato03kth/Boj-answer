#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    scanf("%d", &number);
    if (number != 0)
    {
        for (i = 0; i <= number; i++)
        {
            for (j = 0; j <= i; j++)
            {
                // TODO 매 i j 마다 기울기를 저장
                if ((i == 0) ^ (j == 0))
                {
                    printf("art");
                    count++;
                }
                if (i <= j)
                {
                    if ((j % i) == 0)
                    {
                        count++;
                    }
                }
                // else if (i == 1 || j == 1)
                // {
                //     count++;
                // }
                if (i >= j)
                {
                    if ((i % j) == 0)
                    {
                        count++;
                    }
                }
                // printf("%d", i * j);
            }
        }
        count = count + 2;
    }
    else
    {
        count = 0;
    }
    printf("%d", count);
}
