#include <iostream>
#include <vector>
using namespace std;
int n, k;
vector<short> A(21);
vector<short> B(20);
void In(int c)
{
    for (int i = 0; i < c; i++)
    {
        cout << B[i];
    }
    cout << " ";
}
void giai(int b, int c)
{
    for (int i = b; i <= n; i++)
    {
        if (A[i])
            continue;
        B[c] = i;
        A[i] = 1;
        c++;
        if (c == k)
        {
            In(c);
        }
        else
            giai(i, c);
        A[i] = 0;
        c--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        giai(1, 0);
        cout << endl;
    }
}