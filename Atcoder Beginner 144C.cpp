#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long  ll;
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

//////////////////////////////////////////


long long n;
void Input() {

    cin >> n;
}

void Solve() {

    long long ans = LLONG_MAX;
    long long lim = sqrt(n);
    for(int i = 1; i <= lim + 1; i++ ) {

        if(n % i == 0) {

            ans = min(ans, i + (n / i));
        }
    }

    cout << ans - 2 << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

