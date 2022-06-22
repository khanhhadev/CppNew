//#include <iostream>
//using namespace std;
//
//
//void Merge(int* A, int L, int R, int k)
//{
//	if (L == R) return;
//	int n1 = k - L + 1;
//	int n2 = R - k;
//	int i = 0, j = 0, m = L;
//	int* A1 = new int[n1];
//	int* A2 = new int[n2];
//	for (int t = 0; t < n1; t++)
//	{
//		A1[t] = A[t + L];
//	}
//	for (int t = 0; t < n2; t++)
//	{
//		A2[t] = A[t + k + 1];
//	}
//	
//	while ((i < n1)&& (j<n2))
//	{
//		if (A1[i] < A2[j])
//		{
//			A[m++] = A1[i++];
//		}
//		else A[m++] = A2[j++];
//	}
//	while (i < n1) A[m++] = A1[i++];
//		while (j < n2) A[m++] = A2[j++];
//	delete[] A1, A2;
//}
//void Mergesort(int* A, int L, int R)
//{
//	if (L < R)
//	{
//		int k = (L + R) / 2;
//		Mergesort(A, L, k);
//		Mergesort(A, k + 1, R);
//
//		Merge(A, L, R, (L + R) / 2);
//	}
//}
//
//void print(int* A, int n)
//{
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//		cout << A[i] << "  ";
//}
//int main()
//{
//	int A[9] = { 3,6,8,3,1,7,8,9 };
//	print(A, 9);
//	Mergesort(A, 0, 8);
//	print(A, 9);
//	system("pause");
//	return 0;
//}
