
#include <iostream>
using namespace std;    
int main()
{
    long long A[1000] = {1, 1};
    int n;
    cin >> n;
    for (int i = 2; i <= 1000; i++)
    {
        if (A[i])
            continue;
        for (int j = i * i; j <= 1000; j += i)
        {
            A[j] = 1;
        }
    }
    while (n--)
    {
        int a;
        cin >> a;
        long long x = 1;
        for (int i = 2; i <= a; i++)
        {
            if (A[i])
                continue;
            long long y = 1;
            while (y <= a)
                y *= i;
            x *= y / i;
        }
        cout << x << endl;
    }
}