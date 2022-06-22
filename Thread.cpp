//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <future>
//
//using namespace std;
//mutex A;
//condition_variable Cond;
//static bool done = false;
//
//string Print(promise<string> *pro,string a)
//{
//	lock_guard<mutex> locks(A);
//	for (int i = 0; i < 100; i++)
//		cout << a << " " << i << "\n";
//	done = true;
//	pro->set_value("OK nha");
//	return "OKThread\n";
//	Cond.notify_one();
//}
//
//string PrintMain(string a)
//{
//	mutex A;
//	unique_lock<mutex> locks(A);
//	Cond.wait(locks, [] {return done; });
//	for (int i = 0; i < 100; i++)
//		cout << a << " " << i << "\n";
//	return "OKMain\n";
//}
//
//template <typename T1, typename T2>
//void X(T1 x, T2 y)
//{
//
//}
//
//
//int main()
//{
//	promise<string> Chuoi;
//	future<string> getchuoi = Chuoi.get_future();
//	future<string> getchuoiDB = async(launch::async, Print, &Chuoi, "Thread");
//	cout << getchuoiDB.get();
//	string KQMain = PrintMain(getchuoi.get());
//	cout << KQMain;
//	system("pause");
//	return 0;
//
//}