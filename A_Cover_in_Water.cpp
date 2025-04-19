#include "bits/stdc++.h"
#define ll long long
#define uint unsigned int
#define vi vector<int>
#define vc vector<char>
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

void fillvi(char n, vector<char> v){
  
}


// ===========================================================================

void solve(){
   int n;
   cin >> n;
   vc v;
     for(int i = 0; i < n; i++){
        char in;
        cin >> in;
        v.push_back(in);
    }
   int ans = 0;
//    for(auto it : v){
//     cout << it << " ";
//    }
   int cnt = 0;
   for(int i = 0; i < n; i++){
     if(v[i] == '.' && i!=n-1){
        cnt++;
        
     } 
     else{
        if(v[i]  == '.') cnt++;
        if (cnt == 1){
            ans+=1;
        }
        else if(cnt == 0){

        }
        else if(cnt == 2){
            ans+=2;
        }
        else{
            cout << 2 << endl;
            return;
        }
        cnt = 0;
        continue;
     }
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