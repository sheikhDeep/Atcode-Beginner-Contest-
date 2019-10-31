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


void Input() {

    cin >> n >> m;
}

void Solve() {

    int L, R;

    int l_bound = 1;
    int u_bound = INT_MAX;

    for(int i = 0; i < m; i++) {

        cin >> L >> R;
        if(L > l_bound) l_bound = L;
        if(R < u_bound) u_bound = R;
    }

    //cout << l_bound << " " << u_bound << endl;

    if(l_bound <= u_bound) cout << u_bound - l_bound + 1 << endl;
    else cout << 0 << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

