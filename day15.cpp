#include<iostream>
using std::cout;
int main(){

}   
/*
Inverse in Mod
Extended GCD:
a,b
Let d = GCD(a,b). Then for each ints x,y such that d = ax+by
a = 1a + 0b
b = 0a + 1b
r = a%b = a-qb = (1a+0b) - q(0a+1b) = (1-0q)a + (0-1q)b


If p is prime, 0<a<p, then GCD(a,p) = 1 so there exists x,y such that 1 = ax+py
ax === 1(mod p)
so x = a^(-1) mod p

x^n(mod p)
x^n = (x^(n/2))^2 if n is even
and
(x(x^((n-1)/2))^2 if n is odd
*/
