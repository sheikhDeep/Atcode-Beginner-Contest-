#include <bits/stdc++.h>


using namespace std;

#define endl '\n'
#define PB push_back
#define MP make_pair
#define LL long long
#define FOR(i,a,b) for(int i = (a); i <= (b); i++)
#define RE(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(int)(n)-1)
#define R(i,n) REP(i,n)
#define VI vector<int>
#define PII pair<int,int>
#define LD long double
#define FI first
#define SE second
#define st FI
#define nd SE
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(5);
    cout << fixed;

    int a, b, c;

    cin >> a >> b >> c;


    if(a > b) {

        cout << 0 << endl;

    }
    else if(b/a < c) {

        cout << b/a << endl;
    }

    else if(b/a >= c){

        cout << c << endl;
    }


    return 0;
}

