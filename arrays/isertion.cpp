#include <iostream>
using namespace std;
void print(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " | ";
    }
    cout << endl;
}
void ins(int *a, int n)
{
    int key, j, i;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        cout << "i=" << i << " key=" << key << " j=" << j << endl; // for dry run not required in main logic
        while (j >= 0 && key < a[j])
            j--;
        print(a, n); //for dry run not required in main logic
    }
    a[j + 1] = key;
    print(a, n); //for dry run not required in main logic
}

int main()
{
    int a[] = {6, 5, 4, 3, 2, 1, 0};
    int n = 7;
    cout << "------------Dry run process starts------------" << endl;
    ins(a, n);
    cout << "-----------------final output-----------------" << endl;
    print(a, n);
    return 0;
}