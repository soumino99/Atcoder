#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using ull = unsigned long long;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Template
    int N;
    int T = 0;

    cin >> N;
    int H[N - 1];
    rep(i, N)
    {
        cin >> H[i];
    }

    // 以下記述
    rep(i, N)
    {
        if (T % 3 == 0)
        {
            T += ((H[i] / 5) * 3);
            H[i] -= H[i] / 5;
            if (H[i] == 0)
                ;
            else if (H[i] == 1)
                T++;
            else if (H[i] == 2)
                T += 2;
            else
                T += 3;
        }
        else if (T % 3 == 1 && H[i] == 0)
        {
            ;
        }
        else if (T % 3 == 1 && H[i] == 1)
        {
            T++;
        }
        else if (T % 3 == 1 && H[i] == 2)
        {
            T += 2;
        }
        else if (T % 3 == 1)
        {
            T += 2;
            H[i] -= 2;
            T += ((H[i] / 5) * 3);
            H[i] -= H[i] / 5;
            if (H[i] == 0)
                ;
            else if (H[i] == 1)
                T++;
            else if (H[i] == 2)
                T += 2;
            else
                T += 3;
        }
        else if (T % 3 == 2 && H[i] == 0)
        {
            ;
        }
        else if (T % 3 == 2 && H[i] == 1)
        {
            T += 1;
        }
        else
        {
            T += 1;
            H[i] -= 1;
            T += ((H[i] / 5) * 3);
            H[i] -= H[i] / 5;
            if (H[i] == 0)
                ;
            else if (H[i] == 1)
                T++;
            else if (H[i] == 2)
                T += 2;
            else
                T += 3;
        }
    }

    // cout << N << T << H[0] << H[1] << endl;

    cout << T;

    return 0;
}