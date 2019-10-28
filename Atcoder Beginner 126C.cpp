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

int n, k;
double sum = 0;



void Input() {

    cin >> n >> k;
}

void Solve() {

    for(int i = 1; i <= n; i++) {

        double temp = 1.0/n;
        int now = i;
        while(now < k) {

            now *= 2;
            temp /= 2;
        }

        sum += temp;
    }

    cout << setprecision(12) << sum << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}
