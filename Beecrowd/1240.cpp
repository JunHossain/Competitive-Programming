#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;
        if(a-b<0){
            cout << "nao encaixa\n";
            continue;
        }

        if((a-b)%10==0){
            cout << "encaixa\n";
        }else{
            cout << "nao encaixa\n";
        }
    }
}
