#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s = " Trishna Dutta ";
   cout << s.length() << endl;

   int a = 5, b = 6;
   cout << a+b << "\n";

   //demonstration 3 kinds of loops
   //for loop
   for(int i=0; i<30; i+=10) cout << i << " " ;

   //while loop
   int x = 10;
   while(x--) { cout << x << " " ;}

   //advance for loop or as the interviewers like to put it "advance for loop"
   for(auto x : "data structure") { cout << x << " " ; }

   return 0;
}
