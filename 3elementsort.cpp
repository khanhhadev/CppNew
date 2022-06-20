//#include <iostream>
//using namespace std;
//
//void pick3max(int a[],int max[3], int n)
//{
//	{
//		if (max[0] < max[1]) swap(max[0], max[1]);
//		if (max[0] < max[2]) swap(max[0], max[2]);
//		if (max[1] < max[2]) swap(max[1], max[2]);
//	}
//	for (int i = 3; i < n; i++)
//	{
//		if (max[2] < a[i])
//		{
//			max[2] = a[i];
//			if (max[1] < max[2]) swap(max[1], max[2]); else continue;
//			if (max[0] < max[1]) swap(max[0], max[1]);
//		}
//	}
//
//
//}
//void print(int A[], int n)
//{
//	cout << "\n";
//	for (int i = 0; i < n; i++)
//		cout << A[i] << "  ";
//}
//int main()
//{
//	int a[20] = { 3,6,8,3,1,7,8,9 ,45,767,2,6567,87,32,6,1000 };
//	int max[3] = { a[0], a[1], a[2] };
//	print(a, 20);
//	pick3max(a, max, 20);
//	print(max, 3);
//	system("pause");
//	return 0;
//}