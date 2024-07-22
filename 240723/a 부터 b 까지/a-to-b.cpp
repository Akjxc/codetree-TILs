#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    

    do {
        cout << a << " ";

        if(a % 2 == 0){
            a += 3;
        }
        else {
            a *= 2;
        }

        if(a > b){
            return 0;
        }
    } while (a <= b);
    return 0;
}