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

    for(int i = 1; i < 10; i++) {

        if(n / i < 10) {

            cout << "Yes" << endl;

        }
    }
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  //Solve();

    for(int i = 1; i < 10; i++) {

        if(n % i  == 0) {

            if(n / i < 10) {
            //cout << i << " " << n / i << endl;
            cout << "Yes" << endl;
            return 0;
            }
        }

    }

    cout << "No" << endl;
  return 0;

}

