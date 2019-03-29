
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

typedef long long ll;

bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
int b[21], a[21];
int main() {

    //FAST_IO();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout << setprecision(5);
    cout << fixed;

    int n, m, c;

    cin >> n >> m >> c;



    for(int i = 0; i < m; i++) {

        cin >> b[i];
    }

    int j = 0;
    ll sum = 0;
    int ans = 0;
    while(j < n) {


        for(int i = 0; i < m; i++) {

            cin >> a[i];
        }

        sum = 0;
        for(int i = 0; i < m; i++) {


            sum += b[i] * a[i];
        }

        sum += c;


        if(sum > 0) {

            ans++;
        }
        j++;
    }

    cout << ans << endl;


    return 0;
}

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}

