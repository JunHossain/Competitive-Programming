#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int j=0; j<n; j++){
        if (a[j] >= a[k-1] && a[j] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
}