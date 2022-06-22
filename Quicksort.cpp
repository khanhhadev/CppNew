//#include <iostream>
//using namespace std;
//
//void sortA(int* Ar, int First, int Last)
//{
//	if (First < Last)
//	{
//		int i = First, j = Last, mid = Last;
//		while (i < j)
//		{
//			while ((Ar[i] < Ar[mid]) && (i < j)) i++;
//			while (Ar[j] >= Ar[mid]) j--;
//			if (i < j) swap(Ar[i], Ar[j]);
//		}
//		swap(Ar[i], Ar[mid]);
//		sortA(Ar, First, i - 1);
//		sortA(Ar, i+1, Last);
//	}
//}
//void print(int A[10], int n)
//{
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//		cout << A[i] << "\t";
//}
//int main()
//{
//	int n = 10;
//	int A[10] = { 7,56,76,2,5,8,2,65,97,3 };
//	print(A, 10);
//	sortA(A, 0, 9);
//	print(A, 10);
//
//	system("pause");
//	return 0;
//}