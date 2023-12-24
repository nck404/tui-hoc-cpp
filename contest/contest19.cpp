#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bia = n / 28;
    int chai = bia;

    while (chai >= 3) {
        int tongbia = chai / 3;
        bia += tongbia;
        chai = chai % 3 + tongbia;
    }

    cout <<  bia << endl;

    return 0;
}
