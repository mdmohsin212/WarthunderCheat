#include<bits/stdc++.h>
using namespace std;
#define fastio()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln '\n'
#define gcd(a, b) __gcd(a, b)
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
const ll N = 2e5 + 9;
const ll mod = 1e9 + 7;

void slove(){
    ll a, b;
    cin >> a >> b;
    double val1 = b * log(a);
    double val2 = a * log(b);

    if (val1 < val2)
    {
        cout << '<' << ln;
    }
    else if (val1 > val2)
    {
        cout << '>' << ln;
    }
    else
    {
        cout << '=' << ln;
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}