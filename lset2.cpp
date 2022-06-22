//#include <iostream>
//using namespace std;
//
//int N;//Number of sponsored goods
//int D[100000 + 10];//Preference
//int sol = -30001;//Maximum preference of the first method
//
//void InputData() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> D[i];
//	}
//}
//
//void Solve()
//{
//	int i, sum = 0;
//	for (i = 0; i < N - 1; i++)
//	{
//		sum = D[i];
//		if (sum > sol) sol = sum;
//		for (int j = i + 1; j < N; j++)
//		{
//			sum += D[j];
//			if (sum > sol) sol = sum;
//		}
//	}
//}
//
//
//int main() {
//	InputData();//Input function
//	Solve();
//	cout << sol << endl;//Output
//	return 0;
//}