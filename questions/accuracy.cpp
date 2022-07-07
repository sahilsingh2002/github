#include <iostream>
using namespace std;

int main()
{
     int t;
     cin >> t;
     for (int i = 0; i < t; i++)
     {
          int x;
          cin >> x;
          int mark = x % 3;

          int Wrong;
          if (mark == 0)
          {
               Wrong = 0;
          }
          else if (mark == 1)
          {
               Wrong = 2;
          }
          else
          {
               Wrong = 1;
          }
          cout << Wrong << endl;
     }
     return 0;
}