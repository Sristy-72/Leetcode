class Solution {
public:
    int checkRecord(int n) {
    if (n == 0)
			return 0;
		if (n == 1)
			return 3;
		if (n == 2)
			return 8;
		int m = 1000000007;
		int P[100000];
		int A[100000];
		int L[100000];

		P[0] = 1;
		P[1] = 3;
		L[0] = 1;
		L[1] = 3;
		A[0] = 1;
		A[1] = 2;
		A[2] = 4;

		for (int i = 2; i<n; i++) {
			P[i] = ((P[i - 1] + A[i - 1]) % m + L[i - 1]) % m;
			L[i] = ((P[i - 1] + A[i - 1]) % m + (P[i - 2] + A[i - 2]) % m) % m;
			if (i > 2)
				A[i] = ((A[i - 1] + A[i - 2]) % m + A[i - 3]) % m;
		}
		return ((A[n - 1] + P[n - 1]) % m + L[n - 1]) % m;    
    }
};