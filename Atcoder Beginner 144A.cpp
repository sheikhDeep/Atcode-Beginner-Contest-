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

int a, b;

void Input() {

    cin >> a >> b;
}

void Solve() {

    if(a < 10 && a > 0 && b < 10 && b > 0) {

        cout << a * b << endl;
    }
    else cout << -1 << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

