#include <iostream>
using namespace std;
bool prime(int, int );
int main() {
    int n, i = 2;
    cin >> n;
    if (prime(n, i)) cout << "Yes";
    else cout << "No";
    return 0;
}

bool prime(int n, int i) {
    if (n < 2) return false;
    if (i * i > n) return true;
	if(n%i==0) return false;
    return prime(n, i + 1);
}
