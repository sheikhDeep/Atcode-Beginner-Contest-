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
void Input() {

    cin >> n;

}



void Solve() {

    vector<int> arr(n);
    vector<int> com_sum(n);

    cin >> arr[0];

    com_sum[0] = arr[0];

    for(int i = 1; i < n; i++) {

        cin >> arr[i];
        com_sum[i] = com_sum[i-1] + arr[i];
    }

    int ans = INF;
    int lim = com_sum[n-1];
    for(int i = 0; i < n; i++) {

        int left = com_sum[i];
        int right = abs(left - lim);

        ans = min(ans, abs(left-right));
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

