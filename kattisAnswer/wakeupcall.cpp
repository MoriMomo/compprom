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

int main() {
    fastIO();
    
   int a,b;
   int c =0;
   int d=0;
   cin >> a >>b;
   
   vector<int> button1(a);
   vector<int> button2(b);
   
   for(int i=0;i<a;i++)
   {
       cin >> button1[i];
       c += button1[i];
   }
     for(int j=0;j<b;j++)
   {
       cin >> button2[j];
       d += button2[j];
   }
   
   if(c>d)
   {
      cout << "Button 1" ;
   }
   else if(d>c)
   {
       cout << "Button 2";
   }
   else{
       cout << "Oh no";
   }
   
 
 
    return 0;
}