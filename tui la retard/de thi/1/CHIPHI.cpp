#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream infile("CHIPHI.INP");
    long long n, x;
    infile >> n >> x;
    infile.close();
    long long ghe = (n + 1) / 2;
    long long t = ghe * x;
    ofstream outfile("CHIPHI.OUT");
    outfile << t << endl;
    outfile.close();

    return 0;
}
