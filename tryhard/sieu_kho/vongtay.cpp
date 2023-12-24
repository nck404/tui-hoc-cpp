
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int vong_tay_ben_trai = n % 7;
    int so_tuan = n / 7;
    int vong_tay_ben_phai = so_tuan - vong_tay_ben_trai;

    if (vong_tay_ben_phai < 0) {
        vong_tay_ben_phai += 7;
    }

    cout <<vong_tay_ben_phai   << " " <<vong_tay_ben_trai;

    return 0;
}
