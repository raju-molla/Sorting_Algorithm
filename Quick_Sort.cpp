#include<bits/stdc++.h>
using namespace std;

int Quick_partition(int a[], int lb, int ub)
{
    int pivot=a[lb];
    int start=lb;
    int last=ub;
    while(start<last)
    {
        while(a[start]<=pivot){
            start++;
        }
        while(a[last]>pivot){
            last--;
        }
        if(start<last){
            swap(a[start],a[last]);
        }
    }
    swap(a[lb],a[last]);return last;

}

void quick_sort(int a[], int lb, int ub)
{
    if(lb<ub){
        int loc=Quick_partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int lb=0;
    int ub=n-1;
    quick_sort(a,lb,ub);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
}
