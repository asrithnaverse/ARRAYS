class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int i,j,n;
        n=arr.size();
        for(i=n-2;i>=0;i--)
        {
            bool swapped=0;
            for(j=0;j<=i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swapped=1;
                }
            }
            if(swapped==0)
            {
                break;
            }
        }
    }
};
