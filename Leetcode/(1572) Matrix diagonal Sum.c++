class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        if(mat.size()%2==1)
        {
            for(int i=0;i<mat.size();i++)
            {
                sum=sum+mat[i][i];
                sum=sum+mat[i][mat.size()-i-1];

            }
            return sum-mat[mat.size()/2][mat.size()/2];
        }
        else
        {
          for(int i=0;i<mat.size();i++)
            {
                sum=sum+mat[i][i];
                sum=sum+mat[i][mat.size()-i-1];

            }
            return sum;   
        }
        
    }
};