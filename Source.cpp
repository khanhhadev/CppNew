//
//// In ra cac chuoi con tang dan
//
//#include<iostream>
//using namespace std;
//class Animal
//{
//    int c;
//    void getinf() {};
//};
//
//
//void dost()
//{
//    int n = 10;
//    char x[] = "hello";
//    cout <<"\n" << x;
//}
//
//
//char ab;
//void print(int a[], int n)
//{
//    cout << "\n";
//    for (int i = 0; i < n; i++) cout << a[i] << "  ";
//}
//
//void quicksort(int a[], int n)
//{
//
//    for (int i = 0; i < n; i++)
//    {
//        int count = 0;
//        int* m = new int[n];
//        m[count++] = a[i++];
//        while (a[i] - a[i - 1] == 1)
//        {
//            m[count++] = a[i++];
//        }
//        if (count > 1) print(m, count);
//        i--;
//        delete[] m;
//    }
//}
//int main()
//{
//    dost();
//    int c;
//    int a[25] = { 3,4,5,6,7,867,54,3,2,1,4,6,6,8,8,3,4,5,8,9,10,22,23,24,45 };
//    print(a, 25);
//    quicksort(a, 25);
//    return 0;
//}
