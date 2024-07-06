class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = nums.size();
        int left = 0;
        int right = k;
        double sum=0;
        double maxi=0;
        for(int i=0 ; i<k ; i++ )
        {
            sum+= nums[i];
        }
        maxi=sum;
        while(right<n)
        {
            sum = sum + (nums[right] -nums[left]);

            maxi =max(maxi,sum);
            left++;
            right++;
        }
        return maxi/k;
    }
};
