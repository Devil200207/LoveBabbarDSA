#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s;
    int arr[21] = {80, 130, 100, 80, 90, 110, 120, 140, 70, 80, 130, 160, 70, 60, 40, 50, 30, 40, 160, 150};
    float sum = 0;
    while (1)
    {
        int me;
        cin >> me;
        int q;
        cin >> q;
        if (me < 21 && q < 21)
            sum = sum + (float)arr[me - 1] * (float)q;
        else
            cout << "INVALID INPUT";
        cin >> s;
        if (s == 'n' || s == 'N')
            break;
    }

    cout << fixed << setprecision(1) << sum << " INR";
}