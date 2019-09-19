#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long  ll;
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k, q;

  cin >> n >> k >> q;
  vector<int> cnt(n);





  for(int i = 0; i < q; i++) {

     int a;
     cin >> a;
     cnt[a-1]++;
  }

  int temp = k - q;

  for(int i = 0; i < n; i++) {

     if(cnt[i]) {

        if(temp + cnt[i] > 0) {

            cout << "Yes" << endl;
        }
        else {

            cout << "No" << endl;
        }
     }
     else {

        if(temp <= 0) {

            cout << "No" << endl;
        }
        else {

            cout << "Yes" << endl;
        }
     }
  }

}

