#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d", a + b);
        printf("\n");
    }
    return 0;
}