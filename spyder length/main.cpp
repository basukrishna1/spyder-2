#include <iostream>
#include<string>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t){
    string s;
    cin>>s;
    int sum=0,length=0,r=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='<'){
            sum++;
            r++;
        }
        else
            {sum--;
            r++;}
         if(s[0]=='>')
           {length=0;
           break;}
        if(sum<0)
            break;
        else
            if(sum==0)
            {

            if(length<=r)
            {
             length=r;
             r=0;
            }
            }

    }
    cout<<length<<"\n";
    t--;
    }
    return 0;
}
