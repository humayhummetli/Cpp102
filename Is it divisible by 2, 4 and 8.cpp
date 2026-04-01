#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    int last = 0;
    int start = max(0, (int)num.length() - 4);

    for (int i = start; i < num.length(); i++) {
        last = last * 10 + (num[i] - '0');
    }
    if(last%2==0) cout << "Yes\n";
    else cout << "No\n";
    if(last%4==0) cout << "Yes\n";
    else cout << "No\n";
    if(last%8==0) cout << "Yes\n";
    else cout << "No\n";

    return 0;
