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

  int n;
  int a[20], b[20], c[20];
  int sum = 0;

  cin >> n;


  for(int i = 0; i < n; i++) {


     cin >> a[i];
  }

   for(int i = 0; i < n; i++) {


     cin >> b[i];
  }
   for(int i = 0; i < n-1; i++) {


     cin >> c[i];
  }



  sum += b[a[0]-1];

  for(int i = 1; i < n; i++) {

     sum += b[a[i]-1];

     if(a[i] == a[i-1] + 1) {

        sum+= c[a[i-1]-1];
     }


  }

  cout << sum << endl;



}

