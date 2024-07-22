#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << " ";

    while(a < b){
        if(a % 2 == 0){
            a += 3;
            cout << a << " ";
        }
        else {
            a *= 2;
            cout << a << " ";
        }
    }
    return 0;
}