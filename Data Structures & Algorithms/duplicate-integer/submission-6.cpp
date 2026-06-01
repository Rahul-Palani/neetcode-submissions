class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count = 0; 
        for(unsigned i = 0; i<nums.size();i++){
            for(unsigned j = i+1; j<nums.size();j++){
                if(nums.at(i)==nums.at(j)){
                    count++;
                }
            }
        }
        if (count>=1){
        return true;
        }
        else{
        return false;
        }
    }
    
};