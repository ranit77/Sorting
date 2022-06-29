#include<iostream>
using namespace std;
void sel_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
	      min=j;
            }
        }
	temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
   int n,i;
   int a[30];
   cout<<"Enter a limit:";
   cin>>n;
   cout<<"Enter numbers of the array:\n";
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   sel_sort(a,n);
   cout<<"Array after Selection Sort is:\n";
   for(i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
 return 0;
}
