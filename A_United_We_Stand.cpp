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
  srt(v);
  vi v2(v);
  srt(v2);
  unq(v2);
  if(v2.size() <=1){
    cout << -1 << endl;
    return;
  }
  int x = n-1;
  vi b;
  vi c;
  for(int i = 0; i < n; i++){
    if(i == 0 || v[i] == v[0]) b.push_back(v[i]);
    else c.push_back(v[i]);
  }
  int lb = b.size();
  int lc = c.size();

  cout << lb << " " << lc << endl;
  for(auto it : b){
    cout << it << " ";
  }
  cout << endl;
  for(auto it : c){
    cout << it << " ";
  }
  cout << endl;



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