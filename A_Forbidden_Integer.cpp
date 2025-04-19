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
  int n, k, x;
  cin >> n >> k >> x;
  if(k == 1 && x == 1) cout << "NO" << endl;
  else if(x!=1){
       cout << "YES" << endl;
       cout << n << endl;
       for(int i = 0; i < n; i++){
        cout << 1 << " ";
       } 
       cout << endl;
  }  
  else if(k==2 && n%2!=0){
    cout << "NO" << endl;
  }
  else{
    cout << "YES" << endl;
    int haha;
    cout << n/2 << endl;
    for(int i = 0; i < n/2; i++){
        if(i == n/2 - 1 && n%2==1){
            cout << 3 << " ";
            break;
        }
        cout << 2 << " ";
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