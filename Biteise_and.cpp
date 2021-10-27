Question
Given an array A[ ] of N integers and an integer X. In one operation, you can change the ith element of the array to any integer value where 1 ≤ i ≤ N. Calculate minimum number of such operations required such that the bitwise AND of all the elements of the array is strictly greater than X.
  Input:
N = 4, X = 2
A[] = {3, 1, 2, 7}
Output: 
2
  
  
  
  Solution
  int count(int N, vector<int> A,int X)
    {
        // code here
        int msb = __lg(X), res = N, temp = 0, arr[N] = {0};
    	for (int i = 30; i >= 0; i--) {
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (!arr[j] && ((X >> i) & 1) && !((A[j] >> i) & 1) )
			temp++, arr[j] = 1;
			if (!((A[j] >> i) & 1) && !arr[j])
			count++;
		}
		if (!((X >> i) & 1))
		res = min(res, temp + count);
	}
	return res;
    }
