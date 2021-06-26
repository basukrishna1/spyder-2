#include <bits/stdc++.h>
using namespace std;
int findMax(int n, int m, int a[], int b[], int p[])
{
    int arr[n+1]={0};
    fill_n(arr, n+1, 1);
    arr[n]=-n;
    for (int i=0; i<m; i++)
    {
        int lb = a[i];
        int ub = b[i];
        arr[lb] += p[i];
        arr[ub+1] -= p[i];
    }
    long long sum = 0, res = INT_MIN;
    for (int i=0; i < n; ++i)
    {
        sum += arr[i];
        res = max(res, sum);
    }
    return res;
}

int main() {

    long N,q;
    cin>>N;
    cin>>q;
    int l,r,val;
    int a[q],b[q],p[q];
    for(int i=0;i<q;i++){
        cin>>l>>r>>val;
        a[i]=l-1;b[i]=r-1; p[i]=val;
    }
    cout<<findMax(N,q,a,b,p);
    return 0;
}
