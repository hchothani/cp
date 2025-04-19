#include "bits/stdc++.h"
#define ll long long
#define uint unsigned int
#define vi vector<int>
#define vc vector<char>
#define revsrt(v) sort(v.begin(), v.end(), greater<int>())
#define srt(v) sort(v.begin(),v.end()) //sort
#define mxe(v) *max_element(v.being(), v.end()) //find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) //find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end()))) 
// make sure to sort before applying unique - returns vector with unique elements
#define bin(x,y) bitset<y>(x)
using namespace std;

// ===========================================================================

void solve(){
  int n, k;
  cin >> n >> k;
  //cout << k;

  vi v;
  for(int i = 0; i < n; i++){
    auto in;
    cin >> in;
    v.push_back(in);
  }

 if(k>1){
    cout << "YES" << endl;
    return;
  }

 vi v2(v);
 srt(v2);
 if(v == v2){
    cout << "YES" << endl;
    return;
 }
 else cout << "NO" << endl;


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