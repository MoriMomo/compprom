#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   int b;
   scanf("%d", &a);  // Add & to get the address of a
   scanf("%d", &b);  // Add & to get the address of b
   
   if(a>b)
   {
        printf("MAGA!")   ;
   }
   else if(a<b)
   {
        printf("FAKE NEWS!")   ;
   }
   else{
    printf("WORLD WAR 3!")   ;
   }
   return 0;
}