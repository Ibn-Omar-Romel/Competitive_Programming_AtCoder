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


void solve() {

    int b, n;
    cin >> b >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    vector<int> box(b+1, 0);
    vector<int> ans;

    for (int i = 0; i < n; i++) {

        if (vec[i] != 0) {
            ans.push_back(vec[i]);
            box[vec[i]]++;
        } 
        
        else {
            int smallest = INT_MAX;
            int index = -1;
            for (int j = 1; j <= b; j++) {
                if (box[j] < smallest) {
                    smallest = box[j];
                    index = j;
                }
            }
            box[index]++;
            ans.push_back(index);
        }
    }

    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;

}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
