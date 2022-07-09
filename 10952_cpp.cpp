#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {

        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        if ((a == 0) && (b == 0))
        {
            break;
        }
        else
        {
            printf("%d", a + b);
            printf("\n");
        }
    }
    return 0;
}