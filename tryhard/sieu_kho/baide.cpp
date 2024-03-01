#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
bool check[N + 1];

void snt()
{
    memset(check, true, sizeof(check));
    check[0] = check[1] = false;

    for (int i = 2; i * i <= N; ++i)
    {
        if (check[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main() 
{

    snt();
    int n; cin >> n;
    long long a, tam = 0;
    long long kc = LLONG_MAX, ans = LLONG_MIN;

    for (int i = 0; i < n; ++i) 
    {
        cin >> a; tam += a;
        if (check[i + 1]) ans = max(ans, tam - kc);
        if (check[i + 7]) kc = min(kc, tam);
    }
    cout << ans << endl;
    return 0;
}

 // Kiem tra xem phan tu thu i 2 trong mang check co phai la so nguyen to khong Neu la so nguyen to duoc danh dau la true trong mang check thi tien hanh tinh toan 
 // Tinh gia tri nho nhat giua min val hien tai va prefix sum va gan gia tri do cho min val

// Doc mot so tu ban phim vao bien a 
//  tam += a;
//  Neu phan tu thu i 1 trong mang check la so nguyen to thi tinh gia tri cua bieu thuc tam kc va so sanh no voi gia tri hien tai cua bien ans Neu lon hon thi cap nhat gia tri cua ans 
//  Neu phan tu thu i 2 trong mang check la so nguyen to thi cap nhat gia tri cua kc bang cach lay gia tri nho nhat giua kc hien tai va tam 

// Sau khi ket thuc vong lap in ra man hinh gia tri cua ans Day chinh la gia tri lon nhat cua bieu thuc tam kc trong toan bo day so da doc vao