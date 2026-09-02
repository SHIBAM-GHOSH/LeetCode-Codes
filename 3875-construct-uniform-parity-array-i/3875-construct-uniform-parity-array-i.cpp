class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        int n = nums1.size();
        //we ned one odd No. , that can convert any eben number to odd
        int oddIdx = -1;
        for(int i =0;i<n;i++)
        {
            if(nums1[i]%2 == 1){
                oddIdx = i;
                break;
            }
        }

        //no odd No. exist, we cnnot make an even Nom, odd 
        //all are even
        if(oddIdx == -1) return true;

        vector<int> nums2(n);

        for(int i=0;i<n;i++)
        {
            if(nums1[i]%2 == 1) //alredy odd
            {
                nums2[i] = nums1[i];
            }
            //not odd
            else{
                //even-odd = odd
                nums2[i] = nums1[i] - nums1[oddIdx];
            }
        }


        return true;

    }
};