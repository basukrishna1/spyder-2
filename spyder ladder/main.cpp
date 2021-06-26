#include <iostream>

using namespace std;

long long q=1000000007;

int main() {

    int n,m;
    cin>>n>>m;
    int b[n+1];
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    b[0]=1;
    int j=0;
    for(int i=1;i<=n;i++)
    {
        if(j<m&&a[j]==i)
        {
            b[i]=0;
            j++;
        }
        else
        {
            if(i>1)
            {
            b[i]=(b[i-1]+b[i-2])%q;   //using fibonacii concept
            }

            else
            {
                b[i]=b[i-1]%q;
            }

        }
     }
       cout<<b[n]<<"\n";
}
