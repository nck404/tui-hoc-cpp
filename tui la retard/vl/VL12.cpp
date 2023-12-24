#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    if (N == 0 ) {
        cout << "INF";
    } else {
            for (int i=abs(N)+1; i>= 1; i-- ){

        if (abs(N) % i == 0) {
            cout << i << " " << endl;
        }
    }
    }


    return 0;
}
