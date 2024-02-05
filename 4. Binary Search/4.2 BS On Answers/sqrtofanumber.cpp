#include<iostream>
#include<math.h>
using namespace std;
#include<vector>
int main(){
    int n; 
    cin>>n;
    // Brute Force Approach - T.C O(n)
    int ans = 0;
    for (long long i = 1; i <= n; i++) {
        long long val = i * i;
        if (val <= n * 1ll) {
            ans = i;
        } else {
            break;
        }
    }
    return ans;
    
    // Better Approach - T.C O(n)
    int ans = sqrt(n);
    return ans;

    // Optimal Approach - T.C O(log n)
    int low = 1, high = n;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return high;
}