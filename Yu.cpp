#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    int sum = 0;
    int n;
    cin >> n;

    for (i = 0; i < n; i++){
        sum = sum + (i + 1);
    }
    cout << sum << endl;
    return 0;
}
