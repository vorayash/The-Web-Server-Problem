#include <bits/stdc++.h>
using namespace std;

// sort by text content(bubble sort)
void sort1(vector<vector<int>> &vec, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = 0; j < n - i - 1; j++)
      {
         if (vec[j][0] > vec[j + 1][0]) swap(vec[j], vec[j + 1]);
      }
   }
}

// sort by images(bubble sort)
void sort2(vector<vector<int>> &vec, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = 0; j < n - i - 1; j++)
      {
         if (vec[j][0] == vec[j + 1][0])
         {
            if (vec[j][1] < vec[j + 1][1]) swap(vec[j], vec[j + 1]);
         }
      }
   }
}

int main()
{
   freopen("./Dataset/TWSP_large.txt", "r", stdin);
   freopen("TWSP_large_output.txt", "w", stdout);

   int n;
   cin >> n;

   vector<vector<int>> vec(n, vector<int>(3));

   for (int i = 0; i < n; i++) cin >> vec[i][0] >> vec[i][1] >> vec[i][2];


   // sort by text content(bubble sort)
   sort1(vec, n);

   // sort by images(bubble sort)
   sort2(vec, n);

   // print output
   for (auto j : vec) cout << j[0] << "," << j[1] << "," << j[2] << endl;

   return 0;
}