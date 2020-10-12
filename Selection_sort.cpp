#include<bits/stdc++.h>
using namespace std;

void selection_sort(int  Array[], int n)
{
   for(int i=0; i<n-1; i++)
   {
       int min=i;
       int j;
       for( j=i+1; j<n; j++)
       {
           if(Array[min]>Array[j]){
               min=j;
           }
       }
       if(i!=min){
           int temp=Array[i];
           Array[i]=Array[min];
           Array[min]=temp;
       }
   }
   for(int i=0; i<n; i++)
   {
       cout<<Array[i]<< " ";
   }
   cout<<endl;

}


int main()
{
    int n;
    cin>>n;
    int Array[n+1];
    for(int i=0; i<n ;i++)
    {
        cin>>Array[i];
    }
    selection_sort(Array,n);
}