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


    int l = n / 100;
    int r = n % 100;

    if(l >= 1 && l <= 12) {

        if(r >= 1 && r <= 12) {

            cout << "AMBIGUOUS" << endl;

        }
        else cout << "MMYY" << endl;
    }
    else {

        if(r >= 1 && r <= 12) {

            cout << "YYMM" << endl;
        }
        else cout << "NA" << endl;
    }

}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}
