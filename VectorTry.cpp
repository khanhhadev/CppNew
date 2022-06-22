//#include <stdio.h>
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <vector>
//
////#define A 12
////#define A 4
//
//using namespace std;
//recursive_mutex M; 
//string strX(string A)
//{
//    lock_guard <recursive_mutex> lock(M);
//    cout << "Function Thread 1\n";
//    return "";
//}
//bool search(vector<int>& nums, int target)
//{
//    int n = nums.size();
//    if (target == nums[0] || target == nums[n - 1]) return true;
//    if (nums.size() > 2)
//        if (target > nums[0])
//        {
//            for (int i = 1; i < n && nums[i] >= nums[i - 1]; i++)
//            {
//                if (target == nums[i]) return true;
//            }
//        }
//        else
//        {
//            for (int i = n - 2; i >= 0 && nums[i] <= nums[i + 1]; i--)
//            {
//                if (target == nums[i]) return true;
//            }
//        }
//    return false;
//}
//
//int main() {
//
//    vector<int> nums = { 2, 5, 6, 0, 0, 1, 2 };
//    cout << (search(nums, 0) == true)? "OK":"NO";
//    system("pause");
//    return 0;
//}