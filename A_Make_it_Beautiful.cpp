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
  vi v2(v);
  revsrt(v);
  srt(v2);
  unq(v2);
  if(v2.size() == 1) {
    cout << "NO" << endl;
    return;
  }
  else{
    cout << "YES" << endl;
    if(v.size() > 2) swap(v[1], v[n-1]);
    for(auto it : v){
        cout << it << " ";

    }
    cout << endl;
  }

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