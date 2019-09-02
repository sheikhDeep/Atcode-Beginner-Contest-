#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define long long int ll
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

vector<int> graph[210000];
int ans[210000];
int t[210000];

void dfs(int a, int b, int c) {

    ans[a] = c + t[a];
    for(int i = 0; i < graph[a].size(); i++) {

        if(graph[a][i] == b) continue;
        dfs(graph[a][i], a, c + t[a]);
    }
}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,q;
  cin >> n >> q;

  for(int i = 0; i < n-1; i++) {

    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for(int i = 0; i < q; i++) {

    int a, b;
    cin >> a >> b;
    a--;
    t[a] += b;
  }

  dfs(0, -1, 0);

  for(int i = 0; i < n; i++) {

    if(i) cout << " ";
    cout << ans[i];
  }
  cout << endl;



}

