//#include <stdio.h>
//#include <iostream>
//#include <thread>
//#include <string>
//#include <vector>
//
////#define A 12
////#define A 4
//
//using namespace std;
//
//    string convert(string s, int numRows) {
//        vector<vector<int>> Solve(numRows);
//        vector<int> Solve1;
//        string Zigzag = "";
//        int n = s.length();
//        int a = 1, num = 0;
//        for (int i = 0; i < n; i++)
//        {
//            Solve.at(num).push_back(i);
//            num += a;
//            if (num == 0) a = 1;
//            else if (num == (numRows-1)) a = -1;
//        }
//        for (int i = 0; i < numRows; i++)
//            Solve1.insert(Solve1.end(), Solve[i].begin(), Solve[i].end());
//        n = Solve1.size();
//        for (int i = 0; i < n; i++)
//        {
//            Zigzag += s.substr(Solve1.at(i), 1);
//        }
//        return Zigzag;
//    }
//    int main()
//    {
//        cout << convert("PAYPALISHIRING", 3);
//        int a[] = {5,7,9};
//        cout << size(a);
//        system("pause");
//        return 0;
//    }
