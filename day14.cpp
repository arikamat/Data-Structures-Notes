#include<iostream>
using std::cout;
int main(){

}
/*
Programming Assignment
-------------------------
Mod; Implement modular arithmetic, eg. mod 17
Recall: If p is prime, {0,1,2,...,p-1} form a Field under arithmetic mod p

Overload Operator
Mod x=8, y=9;
cout<<x*y<<'\n'<<x/y
Should handle p<2^63-1
Should NEVER overflow!

Should be able to compute a^e mod p where 0<=a<p, |e| <= 2^63 -1
*/