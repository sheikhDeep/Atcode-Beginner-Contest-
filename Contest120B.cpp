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

    int a, b, k;

    cin >> a >> b >> k;

    for(int i = min(a, b); i >= 1; i--) {

        if(a%i == 0 && b%i == 0) {

                k--;
                if(k == 0) {

                    cout << i << endl;
                    return 0;
                }
        }

    }


    return 0;
}


