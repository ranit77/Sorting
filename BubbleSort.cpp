#include <iostream>
using namespace std;
void bubsort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    cout << "Enter the limit:";
    cin >> n;
    int a[30];
    cout << "Enter the elements of the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubsort(a, n);
    cout << "Array after sorting is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
