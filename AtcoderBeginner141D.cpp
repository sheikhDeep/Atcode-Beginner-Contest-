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

  int n, m;

  priority_queue<ll> pq;

  cin >> n >> m;

  for(int i = 0; i < n; i++) {

     int temp;
     cin >> temp;
     pq.push(temp);
  }

  for(int i = 0; i < m; i++) {

     int temp = pq.top();
     temp = temp / 2;
     pq.pop();
     pq.push(temp);
     if(pq.top() == 0) {

        cout << 0 << endl;
        return 0;
     }
  }

  ll ans = 0;
  for(int i = 0; i < n; i++) {

      if(pq.top() == 0) {

         break;
      }

      ans +=  pq.top();

      pq.pop();
  }

  cout << ans << endl;

}

