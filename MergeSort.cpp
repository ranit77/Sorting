#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
    int i,length1,length2,j,k; 
    length1=mid-start+1;
    length2=end-mid;
    int c[length1];
    int d[length2];
    for(i=0;i<length1;i++)
    {
        c[i]=a[start+i];
    }
    for(j=0;j<length2;j++)
    {
        d[j]=a[mid+1+j];
    }
    int lef=0;
    int right=0;
    k=start;
    while(lef<length1&&right<length2)
    {
       if(c[lef]<=d[right])
       {
         a[k++]=c[lef];
         lef++;
       }
       else
       {
        a[k++]=d[right];
        right++;
       }
    }
    while(lef<length1)
    {
        a[k++]=c[lef];
        lef++;
    }
    while(right<length2)
    {
        a[k++]=d[right];
        right++;
    }
}
void merge_sort(int a[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main()
{
    int a[30];
    int n,i;
    cout<<"Enter the limit:";
    cin>>n;
     cout<<"Enter the numbers: \n";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<"Array after sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}