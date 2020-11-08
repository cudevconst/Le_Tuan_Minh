#include <iostream>
using namespace std;
void xep(long m[100], int a)
{
    for (long i = 0; i < a - 1; i++)
    {
        for (long j = i + 1; j < a; j++)
        {
            if (m[i] > m[j])
            {
                int tmp = m[i];
                m[i] = m[j];
                m[j] = tmp;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a ;
        long m[a];
        for (long i = 0; i < a; i++)
        {
            cin >> m[i];
        }
        xep(m, a);
        cout << m[a - 1] << endl;
    }
    return 0;
}