#include <bits/stdc++.h>
using namespace std;

char word[100];

int main()
{
    scanf("%s", word);
    for (int i = 0; i < 100; i++)
    {
        printf("%c", word[i]);
        if (word[i] == "\0")
        {
            printf("null");
        }

        printf("1");
    }

    return 0;
}