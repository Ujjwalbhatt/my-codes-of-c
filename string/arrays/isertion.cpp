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
void ins(int *a, int n)
{
    int key, j,i;
    for (int i = 1; i < n ; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && key > a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
    void ains(int *a, int n)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << a[i] << " ";
        }
    }
int main()
{
    int a[] = {1, 5, 6, 2, 3, 4};
    int n = 6;
    bins(a, n);
    ins(a, n);
    ains(a, n);
    return 0;
}