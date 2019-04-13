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

int main() {

    //FAST_IO();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout << setprecision(5);
    cout << fixed;

    string s;
    cin >> s;
    int ans1 = 0;
    int ans2 = 0;
    char ch;

    int n = s.size();

    if(n < 2) {

        cout << 0 << endl;
        return 0;
    }

    ch = s[0];


    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {

            if(s[i] != ch) ans1++;
        }
        else {

            if(s[i] == ch) ans1++;
        }
    }

    if(s[0] == '1') ch = '0';
    else ch = '1';



    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {

            if(s[i] != ch) ans2++;
        }
        else {

            if(s[i] == ch) ans2++;
        }
    }

    cout << min(ans1, ans2) << endl;






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



