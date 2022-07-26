#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int A[n][m];
    int B[n][m];
    int C[n][m];
    // A에 데이터 입력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int k = 0;
            scanf("%d", &k);
            A[i][j] = k;
        }
    }
    // B에 데이터 입력
    for (int ii = 0; ii < n; ii++)
    {
        for (int jj = 0; jj < m; jj++)
        {
            int kk = 0;
            scanf("%d", &kk);
            B[ii][jj] = kk;
        }
    }
    // A+B 연산
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    // 출력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
