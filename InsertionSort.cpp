#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        j=i-1;
        temp=a[i];
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
    a[j+1]=temp;
    }
}
int main()
{
    int a[30];
    int i,n;
    cout<<"Enter the limit(max 30):";
    cin>>n;
    cout<<"Enter the numbers:\n";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    insertion_sort(a,n);
    cout<<"Numbers after sorting: \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}