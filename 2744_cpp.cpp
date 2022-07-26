#include <bits/stdc++.h>
using namespace std;

char wordInput[100];
char wordOutput[100];

int main()
{
    scanf("%s", wordInput);
    for (int i = 0; i < 100; i++)
    {
        if (wordInput[i] < 96)
        {
            wordOutput[i] = wordInput[i] + 32;
        }
        else
        {
            wordOutput[i] = wordInput[i] - 32;
        }
        printf("%c", wordOutput[i]);
    }
    return 0;
}