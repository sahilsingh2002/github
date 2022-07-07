#include <iostream>
using namespace std;

int main()
{

    int TestCase;
    cin >> TestCase;
    for (int i = 0; i < TestCase; i++)
    {
        int Items, Discount, Disc_price;
        int without_Disc = 0;
        int with_Disc = 0;
        cin >> Items >> Discount >> Disc_price;
        int arr[Items];
        for (int j = 0; j < Items; j++)
        {
            cin >> arr[j];
        }

        for (int w = 0; w < Items; w++)
        {
            without_Disc += arr[w];
            int p = arr[w] - Disc_price;
            if (p <= 0)
            {
                p = 0;
            }

            with_Disc += p;
        }
        with_Disc += Discount;
        if (with_Disc >= without_Disc)
        {
            cout << "NO COUPON" << endl;
        }
        else
        {
            cout << "COUPON" << endl;
        }
    }
    return 0;
}