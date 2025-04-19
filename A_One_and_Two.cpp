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
  int cnt2 = 0;
  for(auto it : v){
    if(it == 2) cnt2++;
  }
  int cnt1 = 0;
  for(int i = 0; i < n; i++){
    if(v[i] == 2){
        cnt1++;
        cnt2--;
    }
    if(cnt1==cnt2){
        cout << i+1 << endl;
        return;
    }
  }
  cout << -1 << endl;
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