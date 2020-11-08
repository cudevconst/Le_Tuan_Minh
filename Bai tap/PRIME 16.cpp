#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> A(1000001);
    A[1] = 1;
    for (long long i = 2; i < 1000001; i++)
    {
        if (A[i])
            continue;
        for (long long j = i * i; j < 1000001; j += i)
        {
            A[j] = 1;
        }
    }
    while (t--)
    {
        long n;
        cin >> n;
        int dem = 0;
        for (long i = 1; i * i <= n; i++)
        {
            if (A[i])
                continue;
            dem++;
        }
        cout << dem<< endl;
    }
    return 0;
}