#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    for (j = 1; (n + 1) > j;)
    {
        for (i = 0; j > i;)
        {
            /* code */
            printf("*");
            i++;
        }
        printf("\n");
        j++;
    }
}
