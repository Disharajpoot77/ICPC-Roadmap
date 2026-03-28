#include<iostream>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;

    int i = 1;

    while(true){
        int lastd = (k * i) % 10;

        if(lastd == 0 || lastd == r){
            cout << i;
            break;
        }
        i++;
    }

    return 0;
}