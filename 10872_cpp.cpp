#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k = 1;
    int key = 1;
    scanf("%d", &n);
    for (; n >= key;)
    {
        k = k * key;
        key++;
    }
    printf("%d", k);
    return 0;
}