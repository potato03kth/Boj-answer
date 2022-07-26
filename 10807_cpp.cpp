#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        scanf("%d", &c);
        a[i] = c;
    }
    int v = 0;
    scanf("%d", &v);
    for (int j = 0; j < n; j++)
    {
        if (a[j] == v)
        {
            k++;
        }
    }
    printf("%d", k);

    return 0;
}