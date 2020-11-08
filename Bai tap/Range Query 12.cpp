#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        int A[n + 1], B[n + 1];
        A[0] = 0, B[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> A[i];
            A[i] += A[i - 1];
        }
        for (int i = 1; i < n + 1; i++)
        {
            cin >> B[i];
            B[i] += B[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                if (B[j] - B[i] == A[j] - A[i] && max < j - i)
                    max = j - i;
            }
        }
        cout << max << endl;
    }
}