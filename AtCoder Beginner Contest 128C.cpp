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

int N, M;

void Input() {

    cin >> N >> M;
}

void Solve() {


    int s[M][N];
    for(int i = 0; i < M; i++) {

        for(int j = 0; j < N; j++) {

            s[i][j] = 0;
        }
    }

    for(int i = 0; i < M; i++) {

        int t;
        cin >> t;

        for(int j = 0; j < t; j++) {

            int k;
            cin >> k;

            s[i][k-1] = 1;
        }
    }

    vector<int> p(M);

    for(int i = 0; i < M; i++) cin >> p.at(i);

    int bits = pow(2, N);

    int ans = 0;
    for(int i = 0; i < bits; i++) {

        int temp = i;

        vector<int> set_bits(N);

        for(int j = 0; j < N; j++) {

            if(temp & 1 == 1) set_bits.at(j) = 1;
            temp = temp >> 1;
        }

        int a = 0;
        for(int k = 0; k < M; k++) {

            int cnt = 0;
            for(int l = 0; l < N; l++) {

                if(s[k][l] == 1 && set_bits.at(l) == 1) cnt++;
            }
            if(cnt % 2 == p.at(k)) a++;
        }
        if(a == M) ans++;
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

