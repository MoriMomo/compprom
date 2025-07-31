#include <bits/stdc++.h>
using namespace std;

// Macros for convenience
// #define ll long long
// #define endl '\n'
// #define pb push_back
// #define mp make_pair
// #define all(x) (x).begin(), (x).end()
// #define sz(x) (int)(x).size()
// #define rep(i, a, b) for (int i = (a); i < (b); ++i)

// Fast I/O setup
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin >> a;
    
    vector<int> tiket(a);
    
    for(int i=0;i<a;i++)
    {
        cin >> tiket[i];
    }
    
    int maxVal = *max_element(tiket.begin(), tiket.end());
    int minVal = *min_element(tiket.begin(), tiket.end());
    
   int b =  minVal - (maxVal/2) ;
   
   if(b<0)
   {
       cout << 0;
   }
   else{
       cout << b;
   }
    

}