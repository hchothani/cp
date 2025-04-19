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
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
    if(n == 2){
        cout << "Yes" << endl;
        return; 
    }
    vi v2(v);
    srt(v2);
    unq(v2);
    int cnt1 = 0;
    int cnt2 = 0;
    if (v2.size() > 2){
        cout << "No" << endl;
        return;
    }
    else if(v2.size() == 1){
        cout << "Yes" << endl;
        return;
    }
    else{
       for(auto it : v){
        if (it == v2[0]) cnt1++;
        else cnt2++;
       } 
    }
    if(n%2 == 0 && (cnt1 == n/2 && cnt2==n/2)) cout << "Yes" << endl;
    else if(n%2 == 1 && (cnt1 == n/2 || cnt2==n/2)) cout << "Yes" << endl;
    else cout << "No" << endl;


}

// Better Code is using map to get freqeuncies, checking size of map and then subtracting freqeuenies of the two values in map to check if <= 1



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