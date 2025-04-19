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
  vector<vector<int>> vv;
  int arr[n][n];
  int ans = 0;
//  int temp = 0;
  for(int i = 0; i < n; i++){
    vi v;
    for(int j = 0; j < n; j++){
        int in;
        cin >> in;
        v.push_back(in);
        arr[i][j] = in;
    }
    vv.push_back(v);
  }
//   for(auto it: vv){
//     for (auto i : it){
//         cout << i << " ";
//     }
//     cout << endl;
//   }
  
    for(int k = 0; k < 2*n - 1; k++){
       int temp = 0;
  //     int l = n-1;
        for(int j=k, l =n-1; l>=0 && j>=0; j--, l--){
            if(j < n && l < n) temp = min(vv[l][j], temp);
 //           l--;
        }
        // cout << "TEMP For" << k << " " << temp << endl;
        if(temp<0)ans += abs(temp);
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