# QUES AND ANS

## Find the maximum and minimum element in an array(another one's solution)

`#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b)
        {
            cout << (b < c ? b : max(a, c)) << endl;
        }
        else
        {
            cout << (a < c ? a : max(c, b)) << endl;
        }
    }

    return 0;
}`

## Find the "Kth" max and min element of an array(the gfg accepts takes the solution taken out by stl sort but the better way is priority queue)
