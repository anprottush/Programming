#include <iostream>
#include<string.h>
using namespace std;

void lcs(char *S1, char *S2, int m, int n)
{
    int LCStable[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCStable[i][j] = 0;
            else if (S1[i - 1] == S2[j - 1])
                LCStable[i][j] = LCStable[i - 1][j - 1] + 1;
            else
                LCStable[i][j] = max(LCStable[i - 1][j], LCStable[i][j - 1]);
        }
    }

    int index = LCStable[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcs[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (LCStable[i - 1][j] > LCStable[i][j - 1])
            i--;
        else
            j--;
    }
    cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLongest Common Subsequence is: " << lcs << "\n";
}

int main()
{
    char S1[]= "PROTTUSH";
    char S2[] = "AHSAN";
    int m = strlen(S1);
    int n = strlen(S2);
    lcs(S1, S2, m, n);
}
