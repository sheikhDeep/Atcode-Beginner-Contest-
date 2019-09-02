#include<bits/stdc++.h>
using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define long long int ll
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<double> v(n);



  for(int i = 0; i < n; i++) {

    cin >> v.at(i);
  }

  sort(v.begin(), v.end());

  double in = (v[0] + v[1]) / 2;


  for(int i = 2; i < n; i++) {

       in  = (v[i] + in) / 2;

  }

  cout << in << endl;


}

