class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i : nums){
            int count=0;
            for(int num : nums){
                if(i== num){
                    count++;
                }
            }
            if(count==1){
                return i;
            }
        }
        return -1;
        
    }
};