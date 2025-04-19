#include "bits/stdc++.h"
#define ll long long
#define uint unsigned int
#define vi vector<int>
#define srt(v) sort(v.begin(),v.end()) //sort
#define revsrt(v) sort(v.begin(), v.end(), greater<int>())
#define mxe(v) *max_element(v.begin(), v.end()) //find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) //find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end()))) 
// make sure to sort before applying unique - returns vector with unique elements
#define bin(x,y) bitset<y>(x)
using namespace std;

// ===========================================================================

// CUSTOM FUNCTIONS

void fillvi(vector<int> &v, int n){
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
}

// ===========================================================================

void solve(){
    int a, b;
    cin >> a >> b;
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    set<pair<int,int>> st1, st2;
    int dx[4] = {-1, 1, -1, 1};
    int dy[4] = {-1, -1, 1, 1};
    for(int j = 0; j < 4;  j++){
        st1.insert({x1+dx[j]*a, y1+dy[j]*b});
        st2.insert({x2+dx[j]*a, y2+dy[j]*b});
        st1.insert({x1+dx[j]*b, y1+dy[j]*a});
        st2.insert({x2+dx[j]*b, y2+dy[j]*a});
    }
    int ans = 0;
    for(auto x : st1){
        if(st2.find(x) != st2.end()) ans++;
    }
    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}