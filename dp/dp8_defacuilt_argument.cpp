#include<iostream>
using namespace std;
int sum(int a[],int size,int si = 0)
{
    int ans = 0;
    for(int i = si;i<size;i++)
    {
        ans+=a[i];
    }
    return ans;

}
int sum2(int a,int b,int c,int d=0)
{
return a+b+c+d;

}
int main()
{
int a[5];
cin>>a<<endl;
cout<<sum(a,20)<<endl;



}