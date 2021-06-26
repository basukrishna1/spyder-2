#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int b[n-1],a[n];
    for(int i=0;i<n-1;i++)
        cin>>b[i];
    a[0]=b[0];     //a[0] will aways be b[0] for any case
    for(int i=1;i<n;i++)     // there are 2 cases when the array b is sorted and other not sorted
    {   if(b[i-1]<=b[i])
        a[i]=b[i-1];
        else
            a[i]=b[i];
        if(i==n-1)
           {
             a[i]=b[i-1];
             break;
           }
    }

    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    cout<<sum;
    return 0;
}
