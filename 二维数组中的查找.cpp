class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int i, j;
		int row = array.size();
		int col = array[0].size();
		int row_index = 0;
		int col_index = col - 1;
		bool ok = true;
		while (ok)
		{
			if (row_index >= row || col_index<0)
			{
				ok = false;
				break;
			}
			if (array[row_index][col_index]<target)  row_index++;
			else if (array[row_index][col_index]>target) col_index--;
			else break;
		}
		return ok;
	}
};
