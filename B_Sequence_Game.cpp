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
  vi v;
//   cout << n << endl;
  for(int i = 0; i < n; i++){
    int in;
    cin >> in;
    v.push_back(in);
  }  
//   for(auto it : v){
//     cout << it << " ";
//   }
  vi v2;
  for(int i = 0; i < n; i++){
    if (i==0){2
        v2.push_back(v[i]);
        continue;
    }
    if(v[i] >= v[i-1]){
        v2.push_back(v[i]);
    }
    else{
        v2.push_back(v[i]);
        v2.push_back(v[i]);
    }

  }
   cout << v2.size() << endl;
    for(auto it : v2){
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