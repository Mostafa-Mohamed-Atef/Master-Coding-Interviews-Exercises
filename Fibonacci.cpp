#include <iostream>
using namespace std;

int fibonnaci(int num) {
    if (num<2) return num;
    return fibonnaci(num-1) + fibonnaci(num-2);
}
int main() {
    cout << fibonnaci(13) <<endl;
}
