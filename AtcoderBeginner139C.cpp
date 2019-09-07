#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long ll;
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;





int main() {

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    ll squares[100005];

    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> squares[i];
    }

    int ans = 0;
    int max_ans = 0;

    for(int i = 0; i < n-1; i++) {

        if(squares[i] >= squares[i+1]) {

            ans++;
            max_ans = max(max_ans, ans);
        }
        else {

            ans = 0;
        }
    }

    cout << max_ans << endl;

}

