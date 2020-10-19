#include<bits/stdc++.h>
using namespace std;


void solve(int a[], int n,int k)
{

    int counting[n];
    memset(counting,0, sizeof(counting));
    for(int i=0; i<n; i++)
    {
        ++counting[a[i]];
    }
    for(int i=1; i<=k; i++)
    {
        counting[i]=counting[i]+counting[i-1];
    }

    int B[n+1];
    for(int i=n-1; i>=0; i--){
        B[--counting[a[i]]]=a[i];
    }

    for(int i=0; i<n; i++)
    {

        a[i]=B[i];
    }

}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
       k=max(arr[i],k);
    }

    solve(arr, n,k);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
}
