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

    int a, b;

    cin >> a >> b;

    int tot = 1;

    int ans = 0;


    while(tot < b) {

        tot += a - 1;
        ans++;
    }

    cout << ans << endl;




}

