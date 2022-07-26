#include <bits/stdc++.h>
using namespace std;
int main()
{
    char level = 'a';
    char indicator = 'a';
    float score = 0.0;
    scanf("%c%c", &level, &indicator);
    switch (level)
    {
    case 'A':
        score = 4.0;
        break;
    case 'B':
        score = 3.0;
        break;
    case 'C':
        score = 2.0;
        break;
    case 'D':
        score = 1.0;
        break;
    case 'F':
        score = 0.0;
        indicator = '0';
        break;

    default:
        printf("what the hall out");
        break;
    }

    switch (indicator)
    {
    case '+':
        score = score + 0.3;
        break;

    case '-':
        score = score - 0.3;
        break;

    default:
        break;
    }
    printf("%.1f", score);
    return 0;
}
