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



// ===========================================================================

void solve(){
  int n;
  cin >> n;
  if(n%3==0) cout << "Second" << endl;
  else cout << "First" << endl;  
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