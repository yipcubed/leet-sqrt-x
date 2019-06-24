#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    int mySqrt(int x) {
      // cout << "Max: " << INT_MAX << endl;
      if (x == 1 || x == 2 || x == 3) return 1;
      int low = 1;
      int high = x / 2;
      while (low <= high) {
        int mid = low + (high - low) / 2;
        // cout << "x:" << x << ", low:" << low << ", mid: " << mid << ", high: " << high << ", mid2: " << mid2 << endl;
        if (mid == x/mid)
          return mid;
        if (mid > x/mid)
          high = mid - 1;
        else
          low = mid + 1;
      }
      return low - 1;
    }
};

void test1() {
  Solution S;
  cout << "2? " << S.mySqrt(4) << endl;
  cout << "2? " << S.mySqrt(8) << endl;
  cout << "2? " << S.mySqrt(4) << endl;
  cout << "4? " << S.mySqrt(16) << endl;
  cout << "3? " << S.mySqrt(15) << endl;
  cout << "4? " << S.mySqrt(17) << endl;
  // // 2147483647
  // // 2147395599
  cout << "46339? " << S.mySqrt(2147395599) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

