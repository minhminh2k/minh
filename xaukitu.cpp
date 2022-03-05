#include <iostream>
#include <string>

using namespace std;

int main () {

   string s,t;
   cin >> s;
   cin >> t;
   long long i,j,k(0);
   for(i=0;i<=s.length()-1;i++)
   if(s[i]==t[i])
   k++;
   cout << k;

   return 0;
}