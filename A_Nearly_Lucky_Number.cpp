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
  vi v;
  ll input;
  cin >> input;
  ll cnt = 0;
  while(input > 0){
    int digit = input % 10;
    input = input / 10;
    if(digit == 4 || digit == 7){
        cnt++;
    }
  };
//  cout << cnt << endl;
  ll cnt2 = 0;
  if(cnt == 0){
    cnt2++;
  }
  while(cnt > 0){
    int digit = cnt % 10;
    cnt = cnt /10; 
    if(digit != 4 && digit != 7){
        cnt2++;
    }
  };
 // cout << cnt2 << endl;
  if(cnt2){
    cout << "NO";
  }
  else{
    cout << "YES";
  }
  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}