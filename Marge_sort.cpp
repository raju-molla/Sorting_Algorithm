#include<bits/stdc++.h>
using namespace std;

///Marge funcion
void Marge(int arr[], int l, int mid, int r, int n)
{
    int i=l; ///starting from first subarray  
    int j=mid+1; ///starting from second subarray
    int k=l; ///calculated temp array 
    /// create temp array
    int temp[n];
    /// if first subarray first index less then or equal midpoint and second also
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int p=l; p<=r; p++)
    {
        arr[p]=temp[p];
    }
}


///margesort funtion
void margesort(int arr[], int l, int r,int n)
{
    if(l<r){
        int mid=(l+r)/2;
        margesort(arr,l,mid,n);
        margesort(arr,mid+1,r,n);
        Marge(arr, l, mid,r,n);
    }
}



 int main()
 {
     int n;
     cout<< "Enter array size:"<<endl;
     cin>>n;
     int A[n+1];
     cout<< "Enter "<<n<< " element in the array:"<<endl;
     for(int i=0; i<n; i++)
     {
         cin>>A[i];
     }
     cout<< "Before margesort:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< A[i]<< " ";
    } 
    cout<<endl;

    margesort(A,0,n-1,n);

    cout<< "After marge Sort:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<< " ";
    }
    cout<<endl;


 }