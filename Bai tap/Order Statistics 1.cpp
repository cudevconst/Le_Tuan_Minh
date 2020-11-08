#include <iostream>
using namespace std;
void xep(long m[100], int a)
{
    for (long i = 0; i < a; i++)
    {
        for (long j = 0; j < a; j++)
        {
            if (m[j] > m[j + 1])
            {
                int tmp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = tmp;
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
        int a, b;
        cin >> a >> b;
        long m[a];
        for (long i = 0; i < a; i++)
        {
            cin >> m[i];
        }
        xep(m, a);
        int dem = 0;
        for (long i = 0; i < a; i++)
        {
            dem++;
            if (dem == b)
            {
                cout << m[i] << endl;
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}