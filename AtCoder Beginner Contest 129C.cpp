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

int n, m;
ll a[100005];
ll A[100005];

void Input() {

    cin >> n >> m;
}



void Solve() {


    for(int i = 1; i <= m; i++) {

        int t;
        cin >> t;
        A[t] = 1;
    }

    a[1] = (A[1] ? 0 : 1);
    a[2] = a[1] + (A[2] ? 0 : 1);

    for(int i = 3; i <= n; i++) {

        a[i] = ((A[i-1] ? 0 : a[i-1]) + (A[i-2] ? 0 : a[i-2])) % MOD;
        a[i] %= MOD;
    }

    cout << a[n] << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

