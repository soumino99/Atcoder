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
    ll N;
    ll T = 0;

    cin >> N;
    ll H[N];
    rep(i, N)
    {
        cin >> H[i];
    }

    // 以下記述
    rep(i, N)
    {
        if (H[i] >= 5)
        {
            T += ((H[i] / 5) * 3);
            H[i] -= (H[i] / 5) * 5;
        }
        while (H[i] > 0)
        {
            if (T % 3 == 2)
            {
                T++;
                H[i] -= 3;
            }
            else
            {
                T++;
                H[i] -= 1;
            }
        }
    }

    // cout << N << T << H[0] << H[1] << endl;

    cout << T;

    return 0;
}