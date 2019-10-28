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

string s;
int n, k;

void Input() {

    cin >> n >> k;
    cin >> s;
}

void Solve() {


    s[k-1] = tolower(s[k-1]);
    cout << s << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}
