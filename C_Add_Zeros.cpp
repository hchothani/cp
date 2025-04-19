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
  int ans = n;
  vi v;
  for(int i = 0; i < n; i++){
    int in;
    cin >> in;
    v.push_back(in);

  }  
//   for(auto it : v){
//     cout << it << " ";
//   }
//   cout << endl;
  vi videal;
  for(int i = 0; i < n; i++){
    videal.push_back(n-i);
  }
  bool check = true;
  vector<vector<int>> haha;
// int temp = 0;
 int cnt = 0;
 for(auto it : videal){
    cout << it << " ";
 }
 cout << endl;
 while(check){
    int temp = 0;
    cnt++;
    vi index;
    for(int i = 0; i < n; i++){
        if(v[i] == videal[i]){
         temp++;
        index.push_back(i);
        }
    }
    cout << "IDEAL INDEX for " << cnt << " " << endl;
    for(auto it : index){
        cout << it << " ";
    }
    cout << endl;
    haha.push_back(index);
    if(temp<=0) check = false;
    for(int i = 0; i < n; i++){
        videal[i]++;
    }
 }
 int prev = 0;
 for(int i = 0; i < haha.size(); i++){

    for(auto k : haha[i]){
        if(find(haha[i+1].begin(), haha[i+1].end(), i) == haha[i+1].end()){
            ans = ans + k;
        }
    }
    if(haha[i+1].empty()) break;

   
    }
    cout << ans << endl;
    cout << "NEXT" << endl;
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