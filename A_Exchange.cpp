#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    bool flag = false;

    for (int i = 0; i < n; i++) {

        int value = vec[i];

        if (value >= 500 && f > 0) {
            int used = min(value / 500, f);
            value -= (used * 500);
            f -= used;
        }
        if (value >= 100 && e > 0) {
            int used = min(value / 100, e);
            value -= (used * 100);
            e -= used;
        }
        if (value >= 50 && d > 0) {
            int used = min(value / 50, d);
            value -= (used * 50);
            d -= used;
        }
        if (value >= 10 && c > 0) {
            int used = min(value / 10, c);
            value -= (used * 10);
            c -= used;
        }
        if (value >= 5 && b > 0) {
            int used = min(value / 5, b);
            value -= (used * 5);
            b -= used;
        }
        if (value >= 1 && a > 0) {
            int used = min(value / 1, a);
            value -= (used * 1);
            a -= used;
        }

        if (value != 0) {
            flag = true;
            break;
        }            
    }

    flag ? no : yes;

}
