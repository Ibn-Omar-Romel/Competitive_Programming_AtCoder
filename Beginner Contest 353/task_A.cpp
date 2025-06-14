#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

    int n;
    cin >> n;

    vector<int>vec(n);
    int index = -1;
    for ( int i = 0 ; i < n; i++ ) {

        cin >> vec[i];

        if ( i > 0 and vec[0] < vec[i] and index == - 1) {
            index = i;
        }
    }

    cout << index << endl;

    return 0;
}
