#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row = 0;
    scanf("%d", &row);
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d", row, i, row * i);
        printf("\n");
    }

    // 2 * 4 = 8

    return 0;
}