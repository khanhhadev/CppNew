//#include <iostream>
//using namespace std;
//
//void insertionSort(int* A, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		int temp = A[i];
//		int j = i - 1;
//		while ((j>=0) && (A[j] >= temp))
//		{
//			A[j + 1] = A[j];
//			j--;
//		}
//
//		A[j + 1] = temp;
//	}
//}
//
//int Fibona(int n)
//{
//	if (n <= 2) return 1;
//	else return Fibona(n-2) + Fibona(n - 1);
//}
//
//int main()
//{
//	int Arr[10] = { 4,50,-9,2,105,74,7,68,9,10 };
//	int curr = 0;
//	insertionSort(Arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << Arr[i] << " ";
//	}
//
//
//	cout << "\n" << Fibona(6);
//	system("pause");
//	return 0;
//}
//
