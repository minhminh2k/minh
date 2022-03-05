#include <bits/stdc++.h>
using namespace std;
#define maxn 10000
bool checkprime(long long a)
{
    int i,j,k(0),dem(0);
    if(a<=1) return false;
    if(a==2) return true;
    else {
        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                dem++;
            }
        }
        if(dem!=0) return false;
        else return true;
    }
}
int main()
{
   long long a[maxn],i,j,k,l,sum(0),n;
   cin >> n;
   for(i=1;i<=n;i++)
   cin >> a[i];
   for(i=1;i<=n;i++)
   {
       if(checkprime(a[i])==true)
       sum=sum+a[i];
   }
   cout << sum;
}