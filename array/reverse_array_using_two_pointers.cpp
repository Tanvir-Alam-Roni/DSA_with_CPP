// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    while(left<right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        
        left++;
        right--;
    }
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    
    reverse(nums);
    
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}