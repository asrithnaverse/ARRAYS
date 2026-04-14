class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int i;
        int ans=-1;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
            }
        }
        int secmax=-1;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]!=ans && arr[i]>secmax)
            {
                secmax=arr[i];
            }
        }
        return secmax;
    }
};
