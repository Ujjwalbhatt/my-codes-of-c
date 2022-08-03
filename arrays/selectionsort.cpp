#include <iostream>
using namespace std;
void bins(int *a, int n)
{

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void ss(int *a, int n)
{
    int temp;
    int indexofmin;
    cout << "Running selection sort"<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp=a[i];
        a[i]=a[indexofmin];
        a[indexofmin]= temp;
    }
}
void rss(int *a, int n)
{
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[]={3, 5, 2, 1, 4, 6};
    int n = 6;
    bins(a, n);
    ss(a, n);
    rss(a, n);
    return 0;
}