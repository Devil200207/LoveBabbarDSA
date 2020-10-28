#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ars[3] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                ars[0]++;
            else if (arr[i] == 1)
                ars[1]++;
            else
                ars[2]++;
        }

        int j = 0;
        while (j < 3)
        {
            while (ars[j])
            {
                cout << j << " ";
                ars[j]--;
            }
            j++;
        }
        cout << endl;
    }
}