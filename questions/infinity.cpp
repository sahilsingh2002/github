#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, step;
        step = 1;
        cin >> N;
        if (N > step && N % 5 == 0)
        {
            step += N / 5;
            cout << step << endl;
        }
        else if (N > step && N % 5 != 0)
        {
            step = (N / 5) + 1;
            cout << step << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}