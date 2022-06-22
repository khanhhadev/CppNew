//#define _CRT_NONSTDC_NO_WARNINGS 
//#define _CRT_SECURE_NO_WARNINGS 
//#include <iostream>
//#include <stdio.h>
//
////using namespace std;
//
//int N; // Number of executable code data
//int M; // Number of virus data
//int A[20000 + 10]; // Executable code data
//int B[10 + 10]; // Virus data
//
//int sol = 0 ; // Correct answer
//
//void InputData(void)
//{
//	int i;
//	scanf("%d %d", &N, &M);
//	for (i = 0; i < N; i++) 
//	{
//		scanf("%d", &A[i]);
//	}
//	for (i = 0; i < M; i++) 
//	{
//		scanf("%d", &B[i]);
//	}
//}
//
//void OutputData(void)
//{
//	printf("%d\n", sol);
//}
//bool Arrange(int* Arr, int n, bool Comp)
//{
//	/*int Sub = 0;
//	for (int i = 0; i < (n - 1); i++)
//	{
//		for (int j = (i + 1); j < n; j++)
//		{
//			if (*(Arr+i) < *(Arr + j))
//			{
//				int temp = *(Arr + i);
//				*(Arr + i) = *(Arr + j);
//				*(Arr + j) = temp;
//			}
//
//		}
//		if (i == 0) Sub = *Arr - B[0];
//		if (Comp)
//			if ((*(Arr + i) -B[i]) != Sub) return false;
//	}
//	return true;*/
//	int Sub = 0;
//	for (int i = 0; i < (n - 1); i++)
//	{
//		for (int j = (i + 1); j < n; j++)
//		{
//			if (*(Arr + i) < *(Arr + j))
//			{
//				int temp = *(Arr + i);
//				*(Arr + i) = *(Arr + j);
//				*(Arr + j) = temp;
//			}
//		}
//		if (i == 0) Sub = *Arr - B[0];
//		if (Comp)
//			if ((*(Arr + i) - B[i]) != Sub) return false;
//		if (Comp && (i == (n - 2)))
//			if ((*(Arr + i + 1) - B[i + 1]) != Sub) return false;
//	}
//	return true;
//}
//
//void Solve()
//{
//	/*Arrange(B, M, false);
//	for (int ind = 0; ind < (N - M); ind++)
//	{
//		int *Aa = new int[M];
//		for (int g = ind; g < (ind + M); g++) Aa[g - ind] = A[g];
//		sol += (Arrange(Aa, M, true)) ? 1 : 0;
//	}*/
//	Arrange(B, M, false);
//	for (int ind = 0; ind < (N - M + 1); ind++)
//	{
//		int* Aa = new int[M];
//		for (int g = ind; g < (ind + M); g++) 
//			Aa[g - ind] = A[g];
//		sol += (Arrange(Aa, M, true)) ? 1 : 0;
//	}
//}
//
//int main()
//{
//	InputData();
//	Solve();
//
//	OutputData();
//	system("pause");
//	return 0;
//}