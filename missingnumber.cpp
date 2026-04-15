class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int i,n,j,sum=0,sum1=0;
        n=arr.size()+1;
        for(i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        for(j=0;j<=n;j++)
        {
            sum1+=j;
        }
        return sum1-sum;
    }
};
