#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& a, int tgt) {
    int low = 0, hi = a.size() - 1;
    while (low <= hi) {
        int mid = low + (hi - low) / 2;
        if (a[mid] == tgt) return true;
        if (a[low] == a[mid] && a[mid] == a[hi]) {
            low++;
            hi--;
        }
        else if (a[low] <= a[mid]) {
            if (a[low] <= tgt && tgt <= a[mid]) hi = mid - 1;
            else low = mid + 1;
        }
        else {
            if (a[mid] <= tgt && tgt <= a[hi]) low = mid + 1;
            else hi = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 5, 6, 0, 0, 1, 2};
    int target = 67;
    if (search(arr, target)) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found." << endl;
    }
    return 0;
}
