class Solution {
public:
    /* Function to get the single 
    number in the given array */
    int singleNumber(vector<int>& nums){
        
        /* Map to store the elements 
        and their frequencies */
        unordered_map <int, int> mpp;
        
        // Iterate on the array
        for(int i=0; i < nums.size(); i++) {
            mpp[nums[i]]++; //Update the map
        }
        
        //Iterate on the map
        for(auto it : mpp) {
            // If frequency is 1
            if(it.second == 1) {
                // Return the element
                return it.first;
            }
        }   
        
        /* Return -1, if there is no 
        number having frequency 1 */
        return -1;
    }
};