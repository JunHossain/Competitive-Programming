#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int j=1;

    while(j<=t){
        int arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }

        sort(arr, arr+3);
        cout << "Case " << j << ": ";
        cout << arr[1] << "\n";
        j++;
    }
}
