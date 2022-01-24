class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
	vector<int> trailingZeros(n, -1);
	for(int i=0; i<n; i++)
	{
		int j = n-1;
		int zeros = 0;
		while(j >= 0 && grid[i][j] == 0)
		{
			j--;
			zeros++;
		}
		trailingZeros[i] = zeros;
	}

	// for(auto& i : trailingZeros) cout << i << " ";
	int swaps = 0;

	for(int i=0; i<n; i++)
	{
		if(trailingZeros[i] < n-1-i) 
		{
			int j = i+1;
			while(j<n && trailingZeros[j] < n-1-i) j++;
			if(j == n) return -1;

			while(j > i)
			{
				swap(trailingZeros[j], trailingZeros[j-1]);
				j--;
				swaps++;
			}
		}
	}
	return swaps;
    }
};