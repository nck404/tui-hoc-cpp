#include <iostream>

using namespace std;


int main() {
    int n, i, tongdoan, tongtam,ns, ms, tam;

    cout << "Nhập số phần tử của mảng: ";
    int arr[n];
    cin >> n;

    cout << "Nhập các phần tử của mảng:" << endl;
    for (i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Kiểm tra mảng không rỗng
    if (n < 1) {
        cout << "Mảng rỗng." << endl;
        return 1;
    }

    // Khởi tạo tongdoan, tongtam,ns và ms
    tongdoan = arr[0];
    tongtam = arr[0];
   ns = 0;
    ms = 0;
    tam = 0;

    // Tính tổng đoạn con lớn nhất và lưu vị trí bắt đầu và kết thúc
    for (i = 1; i < n; i++) {
        // Nếu tongtam trở nên âm, reset nó về 0 và bắt đầu tính từ phần tử mới
        if (tongtam < 0) {
            tongtam = 0;
            tam = i;
        }

        // Tính tổng đoạn con kết thúc tại vị trí hiện tại
        tongtam += arr[i];

        // Nếu tongtam lớn hơn tongdoan, cập nhật tongdoan và vị trí bắt đầu và kết thúc
        if (tongtam > tongdoan) {
            tongdoan = tongtam;
           ns = tam;
            ms = i;
        }
    }

    cout << "Tổng của đoạn con lớn nhất là: " << tongdoan << endl;
    cout << "Vị trí bắt đầu: " <<ns << endl;
    cout << "Vị trí kết thúc: " << ms << endl;

    return 0;
}
