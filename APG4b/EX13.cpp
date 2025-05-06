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
    cin >> N;
    vector<int> A(N, 0);

    int sum = 0;
    rep(i, N)
    {
        cin >> A.at(i);
        sum += A.at(i);
    }
    int avg = sum / N;
    rep(i, N)
    {
        if (A.at(i) >= avg)
            cout << A.at(i) - avg << endl;
        else
            cout << avg - A.at(i) << endl;
    }
    return 0;
}