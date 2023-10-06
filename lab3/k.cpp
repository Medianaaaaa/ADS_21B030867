#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minLen = n + 1;  // Initialize to a large value
    int left = 0;
    int sum = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum >= k) {
            minLen = min(minLen, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }

    cout << minLen << endl;
    return 0;
}
