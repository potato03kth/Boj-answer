#include <bits/stdc++.h>
using namespace std;

// int x[30];
int main()
{
    int x[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 28; i++)
    {
        int a = 0;
        scanf("%d", &a);
        x[a - 1] = 1;
    }

    for (int j = 0; j < 30; j++)
    {
        if (x[j] != 1)
        {
            printf("%d", j + 1);
            printf("\n");
        }
    }

    return 0;
}