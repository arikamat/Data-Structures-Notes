#include<iostream>
#include<vector>
using std::cout;
int main(){

}
/*
Finding the k largest elements
Build a heap - (O(n))
Extract {Min,Max} k times

O(n + klgn)
where k<=o(n/lgn)

Comparison- Based Sorting
Sorting n items requires Theta(nlgn) comparisons.
Sequence of k comparisons
Determines the state of computation
Each comparison has 2 posisble outcomes
2^k possible states
n! possible orderings
n!<=2^k
lg(n!) <= k
Theta(nlgn)<=k

Non-Comparison-based sorting
Alphabetic:
 key (x0,x1...)
Bits: 32 bit integers.
    Distribution sorting
    Radix Sort: Use stable sort
    Sor by least signifant field first
*/