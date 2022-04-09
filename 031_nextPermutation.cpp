/*
* Purpose: nextPermutation,LeetCode 31
* Author: Jian Yue
* Data:   2022/04/08,revised ----/--/--
* Refrence: ***
*/


#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

//思路：1，从右到左找到升序数组的前一个数；2，在升序数组中找到比前一个数大的最小数；3，交换前一个数与最小数；4，对交换后的右边数组排序。
void nextPermutation(vector<int>& nums) {
    //1，从右到左找到升序数组的前一个数 index 为 n
    int n = nums.size() - 2;
    while (n>=0 && nums[n] >= nums[n+1])
        n--;
    //2，在升序数组中找到比前一个数大的最小数
    if (n >= 0)
    {
        int exchange = nums.size() - 1;
        while (nums[exchange] <= nums[n])
            exchange--;
        //3，交换前一个数与最小数
        swap(nums[n], nums[exchange]);
    }
    
    //4，对交换后的右边数组排序，由于原来的右边升序数组依然有序，也可以将右边数组反转
    //sort(nums.begin() + n + 1, nums.end());
    reverse(nums.begin() + n + 1, nums.end());

    return ;
}


int main()
{
    vector<int> nums{ 1,1,4,3,2,1 };
    nextPermutation(nums);
    return 0;
}


