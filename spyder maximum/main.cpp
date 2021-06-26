#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int q;
   cin>>q;
   int t=q;
   while(q){
    int l,r,val;
    cin>>l>>r>>val;

    for(int i=1;i<=n;i++){
       if(t==q){
        if(i>=l&&i<=r)
            a[i]=i+val;
        else
            a[i]=i;}
        else
          if(i>=l&&i<=r)
            a[i]+=val;

            }
    q--;
   }
   int p;
   int ma=a[1];
   for(int i=1;i<=n;i++)
    {if(ma<a[i])
        {ma=a[i];
        p=i;}
    }
    cout<<a[p];
    return 0;
}
