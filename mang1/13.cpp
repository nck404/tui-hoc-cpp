#include <iostream>
using namespace std;

int main() {
    long long N;

    cin >> N;

    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (N >= notes[i]) {
            int num_notes = N / notes[i];
            count += num_notes;
            N -= num_notes * notes[i];
        }
    }

    cout <<  count << endl;

    return 0;
}
