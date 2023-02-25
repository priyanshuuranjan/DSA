// set har element ko ek hi bar sort krta hai
// ishme unique value return krta hai
// order hamesha sorted hota hai

#include <iostream>
#include <set>

using namespace std;
int main()
{
   set<int> s;

   s.insert(5);
   s.insert(5);
   s.insert(5);
   s.insert(6);
   s.insert(6);
   s.insert(0);
   s.insert(0);
   s.insert(1);
   s.insert(3);

   // printing part

   for (auto i : s)
   {
      cout << i << endl;
   }
   // erase kr dega pr sare value lo print kr dega

   for (auto i : s)
   {
      cout << i << endl;
   }
   cout << endl;
   // count ->batta hai element hai ki nhi

   cout << " 5 is present or not " << s.count(5) << endl;

}
