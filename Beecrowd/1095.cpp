#include<iostream>
using namespace std;

int main(){
    int i = 1;

    for(int j=60; j>=0; j=j-5){
        cout << "I=" << i << " J=" << j << "\n";
        i=i+3;
    }
}
