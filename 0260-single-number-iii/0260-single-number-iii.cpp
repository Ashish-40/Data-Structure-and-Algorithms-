class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> vec;

        for (int i : nums ){
            int count=0;
            for(int num : nums){
                if(i == num){
                    count++;
                }

            }
            if(count==1){
                vec.push_back(i);

            }
        }
        return vec;
    }
};