//#include <iostream>
//using namespace std;
//
//void heapify(int a[], int n, int i)
//{
//	int l = 2 * i + 1;
//	int r = 2 * i + 2;
//	int largest = i;
//	if (l < n && a[l] > a[largest]) largest = l;
//	if (r < n && a[r] > a[largest]) largest = r;
//	if (largest != i)
//	{
//		swap(a[largest], a[i]);
//		heapify(a, n, largest);
//	}
//}
//
//void heapsort(int a[], int n)
//{
//	for (int i = n/2; i >= 0; i--)
//	{
//		heapify(a, n, i);
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		swap(a[0], a[i]);
//		heapify(a, i, 0);
//	}
//}
//void print(int A[], int n)
//{
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//		cout << A[i] << "  ";
//}
//int main()
//{
//	int A[20] = { 4,7,33,5,12,6,89,3,9,45,767,2,6567,87,2,4,7,8,9,11 };
//	print(A, 20);
//	heapsort(A, 20);
//	print(A, 20);
//	system("pause");
//	return 0;
//}