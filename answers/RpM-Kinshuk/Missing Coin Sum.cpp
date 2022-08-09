#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k++] = a[i++];
    }
    while (j < n2)
    {
        arr[k++] = b[j++];
    }
}
void mgsrt(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mgsrt(arr, l, mid);
        mgsrt(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mgsrt(arr, 0, n - 1);
    long long res = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > res)
            break;
        res += arr[i];
    }
    cout << res;
    return 0;
}