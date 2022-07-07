#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b && a % 2 == 0 && (b - 1) / 2 == (a - 2) / 2 || b + 2 == a)
        {
            cout << "YES" << endl;
        }
        else if (a < b && b & 2 == 0 && (a - 1) / 2 == (b - 2) / 2 || a + 2 == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}