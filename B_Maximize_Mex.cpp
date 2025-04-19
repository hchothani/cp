#include "bits/stdc++.h"
#define ll long long
#define uint unsigned int
#define vi vector<int>
#define sort(v) sort(v.begin(),v.end()) //sort
#define mxe(v) *max_element(v.being(), v.end()) //find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) //find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end()))) 
// make sure to sort before applying unique - returns vector with unique elements
#define bin(x,y) bitset<y>(x)
using namespace std;

// ===========================================================================

void solve(){
    int n, x;
  cin >> n >> x;
  vi v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  int ans = 0;
  map<int, int> mp;
  sort(v);
  for(int i = 0; i<n; i++){

      while(mp[ans%x] > 0){
    mp[ans%x]--;
    ans++;
  }

    if(ans==v[i]){
        ans++;
    }
    else if(v[i] > ans){
        break;
    }
    else{
        mp[v[i]%x]++;
    }
  }
  while(mp[ans%x] > 0){
    mp[ans%x]--;
    ans++;
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