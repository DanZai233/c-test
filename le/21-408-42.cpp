#include <iostream>
using namespace std;

void cmpCountSort(int a[], int b[], int n)
{
    int i, j, *count;
    count = new int[n];
    for (i = 0; i < n; i++)
        count[i] = 0;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] < a[j])
                count[j]++;
            else
                count[i]++;
    for (i = 0; i < n; i++)
        b[count[i]] = a[i];
    delete count;
}

int main()
{
    int a[] = {25, -10, 25, 10, 11, 19};
    int b[6];
    cmpCountSort(a, b, 6);
    cout << "The sorted array is: ";
    for (int i = 0; i < 6; i++)
        cout << b[i] << " ";
    return 0;
}