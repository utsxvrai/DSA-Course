#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    int m=n;
    while(m!=0)
    {
        int bit= m & 1;
        ans= (bit * pow(10,i))+ ans;
        m=m%2;
        i++;
    }
    int d=ans;
    int j=0,a;
    while(d!=0)
    {
        int r=d%10;
        if(r==1)
           r=0;
        else
            r=1;
        a=(r*pow(10,j) + a);
        d=d/10;
        j++;
    }
    cout<<a;
    

    return 0;
}