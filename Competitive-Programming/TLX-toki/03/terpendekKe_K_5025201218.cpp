// Ahmad Ferdiansyah Ramadhani
// 5025201218
// Terpendek ke-K

#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    printf("%d\n", arr[k-1]);
    return 0;
}