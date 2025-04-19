
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

void fillvi(vector<int> v, int n){
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
}

// ===========================================================================

void solve(){
    int n; 
    cin >> n;
    vi v;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
    int cntb = 0;
    int cnta = 0;
    int ans = 0;
    int x;
    for(int i = 1; i < (n)/2; i++){
        if(v[n-i-1] == v[n-i]) cnta++;
        if(v[i] == v[i-1]){
            cntb++;
        } 
        if(n%2==1 && i == n/2 - 1){
                if(v[i] == v[i+1]) cntb++;
                if(v[n-i-1] == v[n-i-2]) cntb++;
            }
        swap(v[i], v[n-i-1]);
        if(v[n-i-1] == v[n-i]) cnta++;
        if(v[i] == v[i-1]){
            cnta++;
            
        }
        if(n%2==1 && i == n/2 - 1){
                if(v[i] == v[i+1]) cnta++;
                if(v[n-i-1] == v[n-i-2]) cnta++;
            }
        if(cnta > cntb) swap(v[i], v[n-i-1]);
        ans += min(cnta, cntb);
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