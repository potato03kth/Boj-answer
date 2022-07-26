#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a = 0;
    long long int b = 0;
    scanf("%lld %lld", &a, &b);
    long long int c = a - b;
    if (c < 0)
    {
        printf("%lld", c * (-1));
    }
    else
    {
        printf("%lld", c);
    }
    return 0;
}