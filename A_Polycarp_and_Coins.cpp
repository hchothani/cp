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
  int c1, c2;
  int n;
  cin >> n;
  c2 = int(n*2/6);
  c1 = n - 2*c2;  
  while(abs(c2-c1) >= 2){
    if((c2-c1) >= 2){
        c2--;
        c1+=2;
    }
    else if((c1-c2) >= 2){
        c1-=2;
        c2++;
    }
  }

  cout << c1 << " " << c2 << endl;


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