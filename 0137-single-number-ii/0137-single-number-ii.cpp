class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> m;
        
//         for(auto x: nums){
//             m[x]++;
//         }

//         for(auto x: m){
//             if(x.second == 1){
//                 return x.first;
//             }
//         }
        
//         return -1;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
           mp[nums[i]]++; 
        }
for(auto x:mp)
    if(x.second==1)
        return x.first;
        return -1;
    }
};