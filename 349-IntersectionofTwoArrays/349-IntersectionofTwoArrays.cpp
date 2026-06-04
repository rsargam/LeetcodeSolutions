// Last updated: 04/06/2026, 15:29:51
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5        sort(nums1.begin(),nums1.end());
6        sort(nums2.begin(),nums2.end());
7        int i=0,j=0;
8        while(i<nums1.size() && j<nums2.size()){         
9            if(nums1[i]==nums2[j]){
10               if(ans.empty() || ans.back()!=nums1[i]){
11                ans.push_back(nums1[i]);     
12            }
13            i++;
14            j++;
15            }
16            else if(nums1[i]<nums2[j]){
17                i++;
18            }
19            else{
20                j++;
21            }
22           
23        }
24       
25        return ans;
26
27
28    }
29};