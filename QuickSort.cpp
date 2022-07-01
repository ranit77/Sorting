#include<iostream>
using namespace std;
int partition(int a[],int start,int end)
{   
    int pivot,p_index,i,temp;
    pivot=a[end];
    p_index=start-1;
    for(i=start;i<end;i++)
    {
        if(a[i]<pivot)
        {
            p_index++;
            temp=a[i];
            a[i]=a[p_index];
            a[p_index]=temp;
        }
    }
     temp=a[p_index+1];
     a[p_index+1]=a[end];
     a[end]=temp;
     return p_index+1;
   
}
void quicksort(int a[],int start,int end)
{ 
    int pivot;
    if(start<end)
    {
        pivot=partition(a,start,end);
       quicksort(a,start,pivot-1);
       quicksort(a,pivot+1,end);
    }   
    

}
int main()
{
    int n,i;
    int a[30];
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    cout<<"Array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
  return 0;

}