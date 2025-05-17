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
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if(A == C && B > D)cout << "Yes" << endl;
    else if(A == C) cout << "No" << endl;
    else if(A > C)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}