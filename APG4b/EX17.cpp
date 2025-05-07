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

    // 入力受付
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    vector<int> P(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> P[i];

    // 処理
    int counter = 0;
    rep(i, N)
    {
        rep(j, N)
        {
            if (A[i] + P[j] == S)
            {
                counter++;
            }
        }
    }

    cout << counter << endl;

    return 0;
}