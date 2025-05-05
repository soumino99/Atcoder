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
    int N, A;
    cin >> N >> A;
    rep(i, N)
    {
        int B;
        string op;
        cin >> op >> B;

        if (op == "/" && B == 0)
        {
            cout << "error" << endl;
            break;
        }
        else if (op == "+")
        {
            A += B;
        }
        else if (op == "-")
        {
            A -= B;
        }
        else if (op == "*")
        {
            A *= B;
        }
        else if (op == "/")
        {
            A /= B;
        }
        cout << i + 1 << ":" << A << endl;
    }
    return 0;
}
