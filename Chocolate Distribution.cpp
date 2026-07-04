#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ChocoDis(vector<int>a,int n,int m)
{
    if(m>n)
    {
    return -1;
    }
    sort(a.begin(),a.end());
    int Min=INT_MAX;
    for(int i=0;i<=n-m;i++)
    {
        int diff=a[i+m-1]-a[i];
        Min=min(Min,diff);
    }
    return Min;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int MinDif=ChocoDis(a,n,m);
    if(MinDif==-1)
    {
        cout<<"NOT POSSIBLE"<<endl;
    }
    else
    {
    cout<<MinDif<<endl;
    }
}
