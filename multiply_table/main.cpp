#include <iostream>

using namespace std;

int main(){
    int n, m, i = 0, j = 0;
    cin >> n >> m;
    while(i < n){
        if(j == m){
            j = 0;
            i++;
            cout << endl;
        }
        if(i != n)
            cout << i*j << " ";
        j++;
    }
    return 0;
}
