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
int arr[105];
int sum;

void Input() {

    cin >> n;
    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }
}

void Solve() {

    for(int i = 0; i < n; i++) {

        for(int j = i+1; j < n; j++) {

            sum += arr[i] * arr[j];
        }
    }

    cout << sum << endl;
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

