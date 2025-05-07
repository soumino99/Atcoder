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
    vector<int> A(5);
    rep(i, 5) cin >> A.at(i);
    bool exist = false;
    rep(i, 4)
    {
        if (A.at(i) == A.at(i + 1))
            exist = true;
    }

    if(exist) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}