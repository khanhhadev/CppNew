//#include <iostream>
//
//using namespace std;
//int sourcearr[10] = { 0,500,100,134,2,6,8,23,6,8 };
//
//void change(int &a, int &b)
//{
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//}
//void arrange(int maxz[3])
//{
//	change(maxz[0], maxz[1]);
//	change(maxz[0], maxz[2]);
//	change(maxz[1], maxz[2]);
//}
//int main()
//{
//	int max3[3] = { sourcearr[0],sourcearr[1],sourcearr[2]};
//	arrange(max3);
//	cout << "max3 =\t" << max3[2] << "\t" << max3[1] << "\t" << max3[0] << "\t";
//	for (int i = 3; i < 10; i++)
//	{
//		if (sourcearr[i] > max3[0])
//		{
//			max3[0] = sourcearr[i];
//			arrange(max3);
//		}
//	}	
//	cout << "max3 =\t" << max3[2] << "\t" << max3[1] << "\t" << max3[0] << "\t";
//
//	system("pause");
//	return 0;
//}