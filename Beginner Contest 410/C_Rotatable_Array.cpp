#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


// void solve() {

//     int n;
//     cin >> n;
//     vector<int>vec(n);
//     fr(0,n) {
//         vec[i] = i+1;
//     }

//     int q;
//     cin >> q;

//     while(q--) {

//         int a;
//         cin >> a;

//         if (a == 1) {
//             int p, x;
//             cin >> p >> x;
//             vec[p-1] = x;
//         }
//         else if (a == 3) {
//             int k;
//             cin >> k;
//             while(k--) {
//                 int temp = vec[0];
//                 for (int i = 0; i < n-1; i++) {
//                     vec[i] = vec[i+1];
//                 }
//                 vec[n-1] = temp;
//             }
//         }
//         else {
//             int p;
//             cin >> p;
//             cout << vec[p-1] << endl;
//         }
//     }
// }

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        vec[i] = i + 1;
    }

    int q;
    cin >> q;

    int s = 0;

    while (q--) {
        int a;
        cin >> a;

        if (a == 1) {
            int p, x;
            cin >> p >> x;
            p = (p - 1 + s) % n; 
            vec[p] = x;
        }
        else if (a == 2) {
            int p;
            cin >> p;
            p = (p - 1 + s) % n;
            cout << vec[p] << endl;
        }
        else if (a == 3) {
            int k;
            cin >> k;
            s = (s + k) % n;
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
