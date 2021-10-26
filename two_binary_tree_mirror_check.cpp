// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether two binary
// trees are mirror image of each other
// or not
string checkMirrorTree(int N, int M,
					int A[][2], int B[][2])
{
	// Stores the adjacency list
	// of tree A
	map<int, vector<int> > T1;

	// Stores the adjacency list
	// of tree B
	map<int, vector<int> > T2;

	// Stores all distinct nodes
	set<int> st;

	// Traverse the array A[]
	for (int i = 0; i < M; i++) {

		// Push A[i][1] in the
		// vector T1[A[i][0]]
		T1[A[i][0]].push_back(A[i][1]);

		// Insert A[i][0] in the
		// set st
		st.insert(A[i][0]);

		// Insert A[i][1] in the
		// set st
		st.insert(A[i][1]);
	}

	// Traverse the array B[] in
	// reverse
	for (int i = M - 1; i >= 0; i--) {

		// Push B[i][1] in the
		// vector T2[B[i][0]]
		T2[B[i][0]].push_back(B[i][1]);

		// Insert B[i][0] in the
		// set st
		st.insert(B[i][0]);

		// Insert B[i][0] in the
		// set st
		st.insert(B[i][1]);
	}

	// Iterate over the set st
	for (auto node : st) {

		// If vector T1[node] is
		// not equals to T2[node]
		if (T1[node] != T2[node])
			return "No";
	}

	// Return "Yes" as
	// the answer
	return "Yes";
}

// Driver Code
int main()
{
	// Given Input
	int N = 6;
	int M = 5;

	int A[][2] = {
		{ 1, 5 }, { 1, 4 }, { 5, 7 }, { 5, 8 }, { 4, 9 }
	};
	int B[][2] = {
		{ 1, 4 }, { 1, 5 }, { 4, 9 }, { 5, 8 }, { 5, 7 }
	};

	// Function Call
	cout << checkMirrorTree(N, M, A, B);

	return 0;
}
