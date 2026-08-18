class Solution { 
public: 
    int largestInteger(vector<int>& nums, int k) { 
        
        int n = nums.size(); 
        int ans = -1; 
        
        for(int i = 0; i < n; i++) {  
            
            int count = 0; 
            
            for(int j = 0; j <= n-k; j++) { 
                
                bool found = false; 
                
                for(int l = j; l < j+k; l++) { 
                    
                    if(nums[l] == nums[i]) { 
                        found = true; 
                        break; 
                    } 
                } 
                
                if(found) { 
                    count++; 
                } 
            } 
            
            if(count == 1) { 
                ans = max(ans, nums[i]); 
            } 
        } 
        
        return ans; 
    } 
};