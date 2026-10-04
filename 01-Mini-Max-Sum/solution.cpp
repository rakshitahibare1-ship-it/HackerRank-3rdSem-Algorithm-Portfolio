#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    long long minimum = arr[0];
    long long maximum = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    cout << total - maximum << " " << total - minimum;

    return 0;
}
