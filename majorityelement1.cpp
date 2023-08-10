//Using Bayer Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0;   
        int count = 0;       
        
        for (int num : nums) {
            if (count == 0) {
                ele = num;  
            }
            
            if (num == ele) {
                count++;  
            } else {
                count--;  
            }
        }
        
        return ele;  
    }
};
