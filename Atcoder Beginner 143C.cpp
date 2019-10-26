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


int n;
string s;

void Input() {

    cin >> n;
    cin >> s;
}

void Solve() {

    char check;
    int ans = 1;

    check = s[0];

    for(int i = 1; i < n; i++) {

        if(check != s[i]) {

            ans++;
            check = s[i];
        }
    }

    cout << ans << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

