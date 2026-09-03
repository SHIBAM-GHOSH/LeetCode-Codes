class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        int n = nums1.size();

        //find the smallest odd
        int minOdd = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            if(nums1[i]%2 == 1)
                {
                    minOdd = min( nums1[i], minOdd);
                }
        }

        //if all No. are even
        if(minOdd == INT_MAX) return true;
        
        //gotthemin odd
        //make the nums2 acording ot it 
        vector<int> nums2(n);

        for(int i =0;i<n;i++)
        {
            if(nums1[i]%2 != 1) // not  a odd number, then make it
                {
                    int k  = nums1[i] - minOdd;
                    if(k>=1) nums2[i] = k;
                    else 
                        {
                            return false;
                        }
                }
            else // No. is already odd
            {
                nums2[i] = nums1[i];
            }
        }

        return true;


    }
};