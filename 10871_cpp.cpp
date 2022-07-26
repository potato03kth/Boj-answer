#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int x = 0;
    int a = 0;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < x)
        {
            printf("%d ", a);
        }
    }

    return 0;
}