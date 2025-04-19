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

int findIndex(const std::vector<int>& vec, int element) {
    auto it = std::find(vec.begin(), vec.end(), element);
    if (it != vec.end()) {
        return std::distance(vec.begin(), it);
    }
    return -1; // Return -1 if the element is not found
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
  revsrt(v2);
  int mx = mxe(v);
  int indexi;
  int mn = 10e9 + 1;
  for(int i = 0; i < n; i++){
    int temp = i;
    int loc = findIndex(v, v2[i]);
    temp+=loc;
    mn = min(temp, mn);
  }
//   for(int i = 0; i < n; i++){
//     if(v[i] == mx){
//         indexi = i;
//         break;
//   }
//   }
//   int indexj = 1;

//   for(int i = 0; v2[n-i-1] > v[1]; i++){
//     indexj++;
//   }
// //   cout << indexi << " " << indexj;
// //   cout << endl;
//   int ans = min(indexi, indexj);
//   cout << ans << endl;
cout << mn << endl;

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