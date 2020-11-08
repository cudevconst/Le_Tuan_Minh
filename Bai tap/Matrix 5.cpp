#include <iostream>
using namespace std;
/*
	tinh tong cua hang va cot=max
	(max(cot,hang)*n-sum_phantu)
*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
        }
        int sumc, sumh;
        int maxc = 0, maxh = 0;
        int c = 0, h = 0;
        int C[100], H[100];
        for (int i = 0; i < n; i++)
        {
            sumc = 0, sumh = 0;
            for (int j = 0; j < n; j++)
            {
                sumh += a[i][j];
                sumc += a[j][i];
            }
            C[c++] = sumc;
            H[h++] = sumh;
            maxh = max(maxh, sumh);
            maxc = max(maxc, sumc);
        }
        int MAX = max(maxh, maxc);
        cout << MAX * n - sum << endl;
    }
}