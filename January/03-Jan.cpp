class Solution {
public:
    int minDeletionSize(vector<string>& array) {
        int count = 0;
        int row = array.size();
        int col = array[0].size();

        for(int j=0; j<col; j++)
        {
            for(int i=0; i<row-1; i++)
            {
                if(array[i][j]>array[i+1][j])
                {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};