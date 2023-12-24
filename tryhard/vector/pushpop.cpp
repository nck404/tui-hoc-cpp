#include <iostream>
#include <vector>

// Cho vector và 2 thao tác.
// Thao tác 1 : Thêm 1 phần tử và cuối vector.
// Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng. 


using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (op == 2)
        {
            if (!v.empty())
            {
                v.pop_back();
            }
        }
    }
    if (v.empty())
    {
        cout << "EMPTY" << endl;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
