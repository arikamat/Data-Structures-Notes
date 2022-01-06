# Poker Sort

Hand = 5 cards

1. xStraight Flush
   1.  Flush - All cards from same suit
   2. Straight - 5 cards in ascending order
   3. Ace can be 0 or 14
      1. Ex. A 2 3 4 5 and 10 J Q K A
2. four-of-a-kind
   1. If there are 2 four-of-a-kind the one with the highest card number trumps
3. full house
   1. (3-of-a-kind and a pair)
4. Flush
   1. all same suit - lexicographic order
5. 3-of-a-kind
   1. 2 pairs
6. 1 pair
7. high card

Hint: Sort hand

| Card Index to be used in Code | Actual Card Number/Letter |
| ----------------------------- | ------------------------- |
| 0                             | 2                         |
| 1                             | 3                         |
| 2                             | 4                         |
| 3                             | 5                         |
| 4                             | 6                         |
| 5                             | 7                         |
| 6                             | 8                         |
| 7                             | 9                         |
| 8                             | 10                        |
| 9                             | j                         |
| 10                            | q                         |
| 11                            | k                         |
| 12                            | a                         |

| Clubs | Diamonds | Hearts | Spades |
| ----- | -------- | ------ | ------ |
| 0     | 1        | 2      | 3      |

0 $\le$ (card = 4 $\cdot$ rank + suit) $\le$ 51

```cpp
hand = vector<int>;
//----------------------
void sort(vector<Hand>& hands)
```

Ex. 

K~h~ = 46 

7~s~ = 23 ...

# Probability

Average Runtime

Sample Space : $\Omega$

$\Omega$ is a set, $\omega$ $\in \Omega$

Ex: $\Omega$ = set of all poker hands  $\omega = C_1, C_2, ...C_5$

(Discrete) Assign number, $0 \le p \le 1$ to each  $\omega \in \Omega$ satisfy probability of a set is sum of probabilities of elements.

$P(a) = \sum_{\omega=A} p(\omega)$

Require: $P(\Omega)=1$

Aside

$p(\omega)$ represents degree of belief.

AN event is a subset $A \subset \Omega$

The "smallest" events {$\omega$} are atomic events

(Aside: In infinite $\Omega$ can have unmeasurable events...)

A discrete prob distribution is $p:\Omega \rightarrow [0,1]$

More generally, a prob density $p:\Omega \rightarrow [0,1]$ and $P(A) = \int_{A} P(t) dt$

Uniform Distribution of [0,1], p(t) = 1

$p(\frac{1}{3},\frac{2}{3}) = \int_{\frac{1}{3},\frac{2}{3}}{1dt} = \frac{1}{3}$

Expected Value: $E(A) = \int_{A} tp(t) dt$



# 11/1/2021 Probability

$\Omega$ = sample space

$A \subset \Omega$ an event

P: Power set of $\Omega$ -> [0,1]

If A n B = 0 then p(A u B) = P(A) + P(B)

## Do Now

```c++
bool bad_flip(){
    //returns true with probability p but p is unknown.
}
//Using bad_flip(), write fair_flip() that returns true with probability 1/2
bool fair_flip(){
    while(true){
        bool a = bad_flip(), b = bad_flip();
        if(a^b){
            return a;
        }
    }
    //probability 1 is p(1-p) and probability 2 is (1-p)p
}
```

## Conditional Probability

P(A | B) - Probability of A given B

"A given B"

P(A | B) = P(A n B)/

$p(A | B) = \frac{P(A \cap B)}{P(B)}$

## Independent Events

A, B are independent if P(A | B) = P(A)

Note: if P(A | B) = P(A), we have that $\frac{P(A \cap B)}{P(B)} = P(A) \rightarrow P(A \cap B)=P(A)P(B)$

Events $A_1, ..., A_n$ are pairwise independent  if $P(A_i \cap A_j) = P(A_i)P(A_j) \forall i \ne j$

Events $A_1, ..., A_n$ are independent  if $P(A_1, ..., A_{i_k}) = P(A_i) \cdot ... \cdot P(A_{i_k}) \forall k \& subsets \{A_1, ..., A_{i_k}\}\subset\{1,2,3...,n\}$



Ex. Flip 2 coins

$A_1 =$ 1st heads $P(A_1) = \frac{1}{2}$

$A_2 = $ 2nd heads $P(A_2) = \frac{1}{2}$

$A_3 =$ coins are different. $P(A_3) = \frac{1}{2}$

$P(A_1A_2) = \frac{1}{4}$

$P(A_1A_3) = \frac{1}{4}$

$P(A_2A_3)= \frac{1}{4}$

$P(A_1A_2A_3) \ne \frac{1}{8}$

$P(A_1A_2A_3) = 0$

### Game of Craps

Roll 2 dice.

7 or 11 --> win

2, 3, 12 --> lose

else(rolled 4,5,6,8,9,10){

​	let point = value rolled

​	keep rolling until 

​		7 -> lose

​		point -> win

}

Calculate the possibility of winning (assume fair dice)



# 11/2/2021 Distribution and Density 

X is a random

Ex. Bernoulli random variable:

​	Sample space $\Omega$ 

For example if this was a simple coin toss problem

​	$\Omega = \{heads, tails\}$

​	X(heads) = 1

​	X(tails) = 0

$P(x\le a) = P(\omega \in \Omega: X(\omega) <a)$

We define $F: R \rightarrow [0,1]$ by $F(t) = P(X<t)$

This is a cumulative Distribution function (CDF)



Lets say heads has a probability p and tails has a probability of 1-p

$F(t) = 1-p$ if t<1 and $F(t) = p$ if t=1



Any monotonous increasing function that is right-continusous $0 \le F(t) <1$, lim F(t) = 1 as t-> inf and lim F(t) = 0 as t-> -inf

The pdf (probability) density function doesn't always exist!

P(A) = $ \int_{A} p(t)dt$

$1 = P(\Omega) = \int_{\Omega}p(t)dt$

if p(t) exists, $p(t) = \frac{dF}{dt}$

## Expectation (Expected Value)

$E(x) = \sum_{i=1}^{\infty} x_ip_i$

Ex. Bernoulli:

$E(X) = 0 \cdot (1-p) + 1\cdot p = p$

Cont Case (w pdf)

$E(x) = \int_{\Omega} t(t) dt$

Ex: Uniform density

p(t) = 1

0        1

$\int_{0}^{1}p(t)dt = 1$

$\omega_t$ = pick t, 0<=t<=1

$X(\omega_t)=t$

$E(x) = \int_{0}^{1} tp(t) dt = \int_{0}^{1} t dt = \frac{1}{2}$

Variance

Given a random variable X, let $\mu = E(X)$. Then the variance of X var(x) = $E((x-\mu)^2)$ 

($\sigma$ is standard deviation)

$\sigma = \sqrt{var(x)}$

$E(x) = \int_{0}^{1} (t-\frac{1}{2})^2 dt = \int_{0}^{1} (t^2 -t +\frac{1}{4}) dt=\frac{1}{12}$

$\sigma = \sqrt{\frac{1}{12}} = \frac{1}{2\sqrt{3}}$

## Binomial Random Variables

Flip a coin n times. What is the probability of k heads?

$\Omega = \{\text{Collection of all sequences of n flips}\} = \{(F_1, F_2, ... F_n)\}$

$\omega = (F_1, F_2, ... F_n)$

Probability of heads = p

$Prob(\omega)=\prod_{i=1}^n p(J_i)$

So if $X(\omega)$ = number of heads

$(n\text{ }c\text{ } k) p^k(1-p)^{n-k}=P_{not} =(x=k) = {n\ c\ k) p^k(1-p)^{n-k}}$

$E(x) = \sum_{k=0}^n k(n\ c\ k)p^k(1-p)^k = \sum_{k=1}^n \frac{n!}{(k-1)! (n-k)!}p^k(1-p)^{n-k} = $



# 11/8/2021 Binomial Distribution

## Binomial Distribution

Prob of k heads in n throws 

${n \choose k}p^k *(1-p)^{n-k}$

$X(\omega) = \text{\# of heads}$

E(x) = np

----------------

Expectation is linear: $E(\alpha x + \beta y) = \alpha E(x) + \beta E(y)$

Let $x_j =$ $
\begin{array}{cc}
  \{ & 
    \begin{array}{cc}
      0 & \text{if jth toss is tails} \\
      1 & \text{If jth toss is heads} 
    \end{array} \}
\end{array}
$

E(X_j) = O(1-p) + 1(p) = p

Since $X = \sum_{j=1}^{n} X_j$,

$E(X) = \sum_{j=1}^{n} E(X_j) = np$

Indicator random variable - In general, if A is an event, $I_A(\omega) = 
\begin{array}{cc}
  \{ & 
    \begin{array}{cc}
      0 & \text{if } \omega \not\in A\\
      1 & \text{if } \omega \in A 
    \end{array} \}
\end{array}
$

$E(I_A) = P(A)$

----------------------

Variance: 

$E([x-E(x)]^2) = E(x^2 -2xE(x)+E(x)^2) = E(x^2)-E(2xE(x)) +E(E(x)^2) \\ = E(x^2)-2E(x)E(x) + E(x)^2 = E(x^2) - E(x)^2$

Probability & Generating Functions

Given a discrete probability distribution,

$P(x = \alpha _j)=P_j$                          $(0 \le P_j \le 1, \sum_{j=0}^\infty P_j =1)$

The corr gen Function is $F(x) = \sum_{j=0}^\infty P_j x^j$

Examples:

a) Bernoulli : $F_{Berr} = (1-p)+px$

b) Binomial: $F_{Bin} = \sum_{j=0}^n {n\choose j}p^j(1-p)^{n-j}(x^j)$

Note: $F'(x) = \sum_{j=1}^\infty jP_jx^{j-1}$

$F'(1) = \sum_{j=1}^\infty jP_j = \sum_{j=0}^\infty jP_j =E(x)$



---

$E(x^2) = \sum_{j=1}^\infty j^2P_j = \sum_{j=1}^\infty (j)(j-1)P_j +jP_j  \\ = F'(1) + \sum_{j=2}^\infty (j)(j-1)P_j = F'(1) + F''(1)$

This shows that $var(x)=F''(1)+F'(1)-F'(1)^2$

## Next Lab

### Due Friday

Given Flip() which returns true w/ probability = 1/2.

Flip() and Flip() are independent (successive calls of flip are completely independent)

Write Flip(unsigned long a, unsigned long b) that returns true w/ probability equal to a/b

Expected number of calls to flip should be O(1)!

Hint: Ignore the constraint (the constraint being the O(1) restriction) when thinking about this.



# 11/9

Randomize Input - Can help uniformize response

## Shuffle

```c++
#include<algorithm>
#include<random>
void shuffle(vector<int>&a){
    for(int i=1;i<a.size();++i){
        std::uniform_int_distribution<int> u(0,i);
        int j = u(gen);
        std::swap(a[i],a[j]);
    }
}
```



Think about

Generate every permutation (of n elements) n!

​	Can do nonrecursively or recursively

Generate all k element subsets of n element set $n \choose k$

Generate a random k-element subset of an n-element subset

​	O(k) time & space, sorted



## Famous Random Algorithm - Prime Number Detection

RSA needs 500-1000 digit primes

#### Miller - Rabin Algorithm

Fermat's little Theorem

​	If p is prime, $1 \le a < p$

​		$a^p \equiv a\mod{p}$

​		$a^{p-1} \equiv 1\mod{p}$

But if $a^{p-1} \equiv 1$, p migt not be prime.

Try several as. Still not good enough.

​	Carmichael NUmbers: n not prime such that $a^{n-1} \equiv 1 \mod{n}$ $ \forall \text{ a rel prime to n}$

​	Ramanujan Story: 1729 is a number where you can express it as the sum of two cubes. He, however, did not realize that it is also a carmichael number



Algorithm

Test if p is prime: Write $p-1 = 2^kq$ where q is odd

​	Choose a, 1<a<p-1 randomly.

​		Ind mod p: $a^q, a^{2q}, a^{4q} ... a^{2^{q}}$

if $a^{2^{k}q} \not \equiv 1 \rightarrow \text{p not prime}$

else for each $j\le k$ s.t. $a^{2^jq}\equiv 1$

​	either j=0 --> p is probably prime

​	or j>0

​		if($a^{2^{j-1}q}=-1$) -> p is probably prime

​		if($a^{2^{j-1}q} \ne-1$) -> p is NOT prime



If procedure returns "Probably prime" then Prob(p is prime | a) > 0.25; Events are independent for different a

# 11/11

Generating a Random k-set 

Choose k distinct elements from {1,2,...,n}

1) knnth: 1,2,3,...,n

1....j | j+1

a1 < a2....am

Accept or reject j+1?

k-m elements remain to be chosen from n-j possibilities

$ {n-j} \choose {k-m}$ possible remaining subsets

O(n) time

O(k) space

a1<a2<...ak

How many of the $ {n-j} \choose {k-m}$ subsets contain x= j+1

Accept w/ probability $\frac{ {n-j-1} \choose {k-m-1}}{ {n-j} \choose {k-m}} = \frac{k-m}{n-j}$

```c++
//algo to use if n/2 <= k <= n
VI knnth_rks(int n, int k){
    VI a(k);
    for(int m=0,j=1;m<k&&j<=n;++j){
        double xi = rv(); //0<=x<=1
        if((n-j)*xi<k-m){
            a[m++] = j+1;
        }
    }
    return a;
}
```

## Floyd's Algorithm

O(k) time & space

Output not in orde

see picture

## 11/12/2021

By induction each of the  ${n-1}\choose {k-1}$ subsets is equally likely

Choose $x_k$

What is the probability of getting $a_1<a_2<...<a_k$

Case 1: $a_k \not = n $

Prob($x_k = a_1$) = $\frac{1}{n}$

...

Prob($x_k = a_k$) = $\frac{1}{n}$

P($a_1<a_2<...<a_k$) = $\sum_{i=1}^{k} P(a_1<a_2<...<a_k | a_1< ... a_{i-1}<a_{i+1}< ... <a_k) P(a_1<...a_{i-1}<a_{i+1}) $

$=\frac{k}{n} \cdot \frac{1}{{n-1} \choose {k-1}} = \frac{1}{n\choose k}$

Case 2: $a_k = n $

P($a_1<a_2<...<a_k$) = $\sum_{i=1}^{k} P(a_1<a_2<...<a_k | a_1< ... a_{i-1}<a_{i+1}< ... <a_k) P(a_1<...a_{i-1}<a_{i+1}) $

$=\frac{k}{n} \cdot \frac{1}{{n-1} \choose {k-1}} = \frac{1}{n\choose k} = \frac{k}{n} \frac{1}{{n-1}\choose{k-1}} = \frac{1}{n\choose k}$

This happened because $P(a_1<a_2<...<a_k | a_1< ... a_{i-1}<a_{i+1}< ... <a_k) $ = $P(x_k=n)$ =P(choose at random) + P(random choice = prev $x_i$) =$ \frac{1}{n}+\frac{k-1}{n} = \frac{k}{n}$



Another floyd's method (or more recentnly, Brent's method)

To check if a linked list cycles.

Floyd's method- have a fast pointer that moves up 2 each time and a slow pointer that moves up 1 each time. Keep going until pointers fall off the end of linked list (null ptr) and return that it doesn not cycle or keep going until pointers are equal to each other in which case return that linked list cycles



## Pollard Rho

O($n^\frac{1}{4}$)

Hypothesize that the sequence $x_i \leftarrow (({x_{i-1}})^2 -1) \mod n$ where $x_i$ is a random number between and 1 and n and it "behaves randomly"

Check if $x_i, y_j$ have common factors - GCD is efficient | i is the slow pointer going from 1,2,3,4 and j is the slow pointer going 2,4,6,8,10, etc.

Use Floyd (or Brent) to determine if the sequence loops

​	Checks $gcd(x_i-x_{2^k},n) \not = 1,n$

​		if not gcd(..) = diviser of proper



loop ~ $10\cdot n^{\frac{1}{4}}$

Find a nontrivial divisor of n

$x_o$ = random (2,n-2)

$x_i$ = $(x_{i-1}^2 +1) \mod n$   || $y_i = y_{i-1}^2 +1 \mod p$

$xx_i$ (fast pointer) = $(x_{i-1}^2 +1) \mod n$

$xx_i$ (fast pointer) =  $(x_{i-1}^2 +1) \mod n$

if d=kgcd$(x_i-xx_i,n)$<n

​	return d

if d==n

​	fail



# 11/15/2021

## Birthday Paradox

Choosing m values randomly from {1,2,3,...n}, what is the probabily of a repeat > ?

Probability of m distinct values 1, $\frac{n-1}{n}$, $\frac{n-2}{n}$, ... $\frac{n-m-1}{n}$

Probability of repeat $1-1(1-\frac{1}{n})(1-\frac{2}{n})...(1-\frac{m-1}{n})$



x>0

$e^x = 1+x + \frac{x^2}{2}+ \frac{x^3}{6}...$

$< 1 + x + x^2 + x^3 +...$

= $\frac{1}{1-x}$

### $1-x<e^{-x}$

$1-\frac{k}{n} < e^{-\frac{k}{n}}$

$(1-\frac{1}{n})(1-\frac{2}{n})...(1-\frac{m-1}{n}) < e^{-\frac{1}{n}}...e^{-\frac{m-1}{n}} = e^{-\frac{1}{n}\sum_{k=1}^{m-1}(k)} = e^{\frac{-m(m-1)}{2n}}$



$ e^{\frac{-m(m-1)}{2n}} = 1 - \alpha$ (desired prob.)

$ e^{\frac{-m(m-1)}{2n}} = 1- \alpha$

$m(m-1) = 2nln(\frac{1}{1-a})$

$m \approx \sqrt{2ln(\frac{1}{1-a})}\sqrt{n}$

Nuber of iterations < $4\sqrt{p}$ < $4n^{\frac{1}{4}}$

## Hash Tables

Goal: Abstract Data Type of Set 

0) Create an empty set
1) add an element x tos et
2) query if set contains x
3) (optional) remove element x from set
4) We want search to be O(1)

Hash Function 

Elements are positive integers

Can map a seq of bits to an int

$h(x) = b_{n-1}b_{n-2}...b_0 \rightarrow (\sum_{k=0}^{n-1}(b_kz^k)) \mod m$

Table has m buckets. Put x in bucket h(x)

What if $h(x_1) =h(x_2)$

Chaining vs Open addressing

| Chaining                      | Open Addressing |
| ----------------------------- | --------------- |
| Put x_1, x_2 into same bucket |                 |



# 11/19/2021

Secondary Hashing

loc of ith probe = $(h_1(k) +ih_2(k)) \mod m)$

We want $h_1(k) + ih_2(k) \mod m = 0,1,...,m-1$ to reach every loc:

Simplest: Let $m=2^l$, $h_2(k)$ is always odd



Recall Chaining:

​	Successful: $1+ \frac{\alpha}{2}$

​	Unsuccessful: $1+\alpha$



## Open Addressing: Expected # of probes

P(>0 probes) +P(>1 probe) + P(>2 probes) + ...

= p(1) + p(2 probes) + p(3 probes) + ...

​            +p(2 probes) + p(3 probes) + ...

​                                   + p(3 probes) + ... 

= 1P(1 probe) + 2P(2 probes) + 3 P(probes) +...

=$\sum_{k=1}^{\infty}kP(k \text{ probes})$

= E(# of probes)



### What if $P(>\text{k probes})$



 = P(probing an occupied spot k times)

$= \frac{n}{m} \cdot \frac{n-1}{m-1} \cdot \frac{n-2}{m-2} \cdot ... \cdot \frac{n-k-1}{m-k+1}$

$< (\frac{n}{m})^k = \alpha^k$

(# of probles) < $\sum_{k=0}^{\infty} \alpha ^k$ = $\frac{1}{1-\alpha}$

Successful: E(# of pr	obes) = $\frac{1}{n}\sum_{k=1}^n\text{\# of probes to find kth key}$

$\approx \frac{1}{n}\sum_{k=1}^{n} E(\text{\# of probes when k-1 keys in table}) = \frac{1}{n}\sum_{k=1}^{n}\frac{1}{1-\frac{k-1}{m}}$

=$\frac{1}{n}\sum_{k=1}^{n}\frac{m}{m-k+1} = \frac{m}{n}\sum_{k=1}^{n}\frac{1}{m-k+1}$

Let $H_m=1+\frac{1}{2}+\frac{1}{3}  + ... +\frac{1}{m} \approx ln(m)$

$=\frac{m}{n}(\frac{1}{m}+\frac{1}{m-1}+...+\frac{1}{m-n+1}) = \frac{m}{n}(H_m - H_{m-n}) = \frac{m}{n}(ln(m) - ln(m-n)) = \frac{m}{n}ln(\frac{m}{m-n}) = \frac{1}{\alpha}ln(\frac{1}{1-\alpha})$



#### Expected Hash Performance

|              | Chaining             | Open Addressing                          |
| ------------ | -------------------- | ---------------------------------------- |
| Unsuccessful | $1+\alpha$           | $\frac{1}{1-\alpha}$                     |
| Successful   | $1+\frac{\alpha}{2}$ | $\frac{1}{\alpha}ln(\frac{1}{1-\alpha})$ |

Open addressing can't handle deletions!

# 11/22/21

## Bicolor Towers of Hanoi 

$h(n,t) = \text{\# of moves to transfer n disks given t towers}$

h(n,t) = h(k,t) + h(n-k,t-1) where t is an upper portion of the initial tower



h(n,t) = min{(2h(k,t) + h(n-k,t-1)} with the restriction that $1 \le k \le n-1$

| n    | 3    | 4    |
| ---- | ---- | ---- |
| 1    | 1    | 1    |
| 2    | 3    | 3    |
| 3    | 7    | 5    |
| 4    | 15   |      |
| 5    | 31   |      |

$2h(k,4) + h(3-k,3) = 2h(k,4) + 2^{3-k}-1$



Assignment: implement this

H(n,from,to,aux)

h(nt,nd,aux) where nt is the number of towers, nd is the number of disks, and aux is the permutation

## Other Recursion stuff

Recursion is not inherently inefficient

## Non-Attacking Queens

```c++
int count =0;
int q[100];
void search(int r){
    if(r==n){
        ++count;
        return;
    }
    for(int c=0;c<n;c++){
        if(safe(r,c)){
            q[r]=c;//r is the row number
           	search(r+1);
        }
    }
}
bool safe(int r, int c){
    //just a method to see if a certain row and column is safe from the other queens
}
```

13x13 --> 73712 solutions

Recursive tiem 0.53 sec

Nonrecursive time 0.76 sec


Exercise to show that recursive does not necessarily mean inefficient



## Misc.

```c++
bool odd(int n);
bool even(int n){
    if(n==0){
        return true;
    }
    return odd(n-1);
    
}
bool odd(int n){
    if(n==0){
        return false;
    }
    return even(n-1);
}
```

# 11/29/2021

## Dynamic Programming (DP)

```c++
//Exponential time algorithm
int fib(int n){
	if(n>2) return n;
	return fib(n-1)+fib(n-2);
}
```

Above is an exponential time algorithm for fibonacci, this is because you are repeating calcuations.

​	Ex calling fib(2) for both fib(4) and fib(3) in the recursion stack for fib(n) where n>2



Memoization

```c++
VI f;
int mem_fib(int n){
    if(f.size()>n){
        return f[n];
    }
    if(n<2){
        f.push_back(0);
        f.push_back(1);
        return n;
    }
    f.push_back(mem_fib(n-2)+mem_fib(n-1));
    return f(n);
}
```

On a side note, the only operators that gurantee evaluation of left arg before right are ``? && || ,``

```c++
//Simple Dynamic Programming
f0=0;
f1=1;
for(int i=2;i<n;++i){
    f2=f0+f1;
    f0=f1;
    f1=f2;
}
return f2;
```

When a problem decomposes into smaller sub-problems having the same structure as the original, we save computation by storing previously computed sub-problems.



Top Down --> Recursive

Bottom Up --> DP



Example: m x n array of int. A path moves from top to bottom, choosing one of 3 cells below and adjacent to current cell, accumalating numner in cell. Maximize sum in one descent



Exponential number of paths -> $n*2^{m-1}$ paths.

​	Sub-Problem: Start at row n

​		Store results in a table.

​		"Base" case: start at bottom row:

​			``sum[m-1][j]`` = ``a[m-1][j]``

``sum[i-1][j] = a[i-1][j]+max{sum[i][j-1],sum[i][j],sum[i][j+1]}``



Actual Application - Seam Carving

​	Crop a photo.

​	Score of path: see picture

# 11/30/2021

## Knapsack

Choose a subset of items where each item has a value and a weight so that total weight > W and total value is maximized.



## Edi Distance

Given 2 strings s0, s1 what is the min cost to turn s0 into s1 w/ a sequence of "edit operations," e.g. insert 1 char, change 1 char, delete 1 char, swap 2 adjacent characters, each having a certain cost?

Build a 2d table where c[i][j] is the cost of changing s0[0:i] to s1[0:j]



If |s0| = m, |s1|=n, then time = O(mn) and space = O(mn)



LCS: longest common subsequence

This was linux's diff does



# 12/2/2021

## Egg Dropping

Egg breaks from floor all floors above f and never breaks under f



```c++
def getPartition(int eggs){
    return 1-x/(2x-1);
}
def binaryDrop(int flr,int ciel, int b){
    
}
def linearDrop(int flr,int b){
    
}
def initFunc(int b,int e){
    if(e==1){
        linearDrop(0,b);
    }
    else{
        binaryDrop(0,b,b);
    }
}
```

















# 12/6/2021

** Make sure all labs are submitted by Wednesday 12/8**

Graphs vs Digraphs

| Graphs                               | vs   | Digraphs                                          |
| ------------------------------------ | ---- | ------------------------------------------------- |
| Edge = {u,v}                         |      | Arc = (u,v)     ($\ne$ (v,u))                     |
| line segment between u and v         |      | ray between u and v going from u to v             |
| acts like a triangle with 3 vertices |      | acts like a triangle with a bunch of directionals |

## Graphs

A cycle: $V_i, V_{i_2},\ ...,\ V_{i_k}$       ($V_{i_1} = V_{i_k}$, all others distnict)

$C_n$ denotes an n-vertex graph that is an n-cycle

![graphpic](C:\Users\arikam22\AriKamat\Data Structures\LearnCpp\Notes\graphpic.jpg)

## Bipartite Graph:

G = (V,E) where you can write $V = V_1 \cup V_2$       $(V_1 \bigcap V_2 = \emptyset)$Such that all edges $e = \{v_1,v_2\}$ satisfy $v_1 \in V_1,$ $v_2 \in V_2$



![bipartiteGraphPic](C:\Users\arikam22\AriKamat\Data Structures\LearnCpp\Notes\bipartiteGraphPic.jpg)

## The Kuratowski Graph

Kuratowski graph is $K_{3,3}$

Theorem (More or less): A graph is planar iff it does not cointain a $\boxed{\text{subgraph}}$ homeomorphic to $K_{3,3}$ or $K_5$

$O(n^5)$

![karatowskiGraph](C:\Users\arikam22\AriKamat\Data Structures\LearnCpp\Notes\karatowskiGraph.jpeg)

$G = (V,E)$

$H = (U,F)$ a graph is a subgraph of G if $U \subset V, F \subset E$

H is an induced subgraph of $G = (V,E)$ if, say $H = (U, F)$ and every edge $\{u,v\} \in E$ is an edge in F if $\{u,v\} \subset U$

So, the induced subgraph on $U \subset V$ is unique

![subGraph_InducedSubGraph](C:\Users\arikam22\AriKamat\Data Structures\LearnCpp\Notes\subGraph_InducedSubGraph.jpg)

A component is a maximal connected subgraph

![20211206_085054](C:\Users\arikam22\AriKamat\Data Structures\LearnCpp\Notes\20211206_085054.jpg)

## Famous Problems

Given $G = (V,E),\ u,v\in V$, 

Find a path from $u$ to $v$, find the shortest path from $u$ to $v$, find all paths from $u$ to $v$, find the longest path from $u$ to $v$.

A path can not repeat vertices/nodes

Shortest $\rightarrow$ Fewest edges

Find a Hamiltonian cycle: A cycle containing all vertices

In a (Multi) graph find an Eulerian circuit: All edges occur exactly once.



## Weighted Graphs

$G = (V, E)$

and each $\{u,v\}\in E$ has a weight $m(\{u,v\})\in \R$

Minimum Weight paths & cycles.



(Traveling Salesperson Person: Find a minimum weight Hamiltonian Cycle)



# 12/7/2021

$C_n, K_n, K_{m,n}$

## Tree

A connected acyclic graph

![CS 551: Communication, Interconnection Tree](https://www.cs.colostate.edu/~cs551/Figures/tree.gif)

## Forest

An acylic graph

A bunch of Trees

## Digraphs

A digraph w/ no cycles (a directed acyclic graph) D.A.G.

![Guide: What is Directed Acyclic Graph? | by Kript Team | kriptio | Medium](https://miro.medium.com/max/1838/1*Fi1AZPZLrGf-6wM_wTSPQw.png)

May be rooted or unrooted.

All trees are planar



Graph Coloring is an interesting problem that arises from this:

A legal coloring is an assignment of a integer to each vertex such that adjacent vertices have different integers. What is the minimum number of distinct integers possible?

There is a four color map theorem which states that every map may be colored w/ less thn 4 colors

## Implementing Graphs

Easiest: Adjacency Matrix

Pro: Easyu

Con: Too much space. $O(n^2)$

Better: Adjacency Lists

​	Vector of vertices, each vertex has a list of what is connected to it



# Depth First Search

```c++
int counter = 0;
search(Graph& g, int v){
    g[b].pre = ++counter;
    for(int i=0;i<g[v].nubrs.size();++i){
        int w = g[v].nubrs[i];
        if(g[w].pre==UNSEEN){
			search(g,w);
        }
    }
    g[v].post=++counter;
}
int dfs(Graph& g){
    counter = 0;
    int nc=0;
    for(int v=0;v<g.size();++v){
        if(g[v].pre==UNSEEN){
            ++nc;
            search(g,v);
        }
    }
    return nc;
}
```

## DFS for Digraphs (Directed Graphs)

Forward Edge: Arc from vertex to a (non-child) descendant

Cross Edge: Neither Vertex is a descendant of the others

## DAG: Direct Acyclic Graph:

Topological Ordering:

​	G=(V,E)

$V=\{v_1,...,v_n\}$

$(v_1,...,v_n)$ is a top ord if there are no arcs from $V_{i_{j}}$ to $V_{i_{k}}$ whereever j>k



# Knnth's Top ord Alg

Input: List of Arcs:

$(V_i, V_j)$ 

.

.

.

Determine out-degree of each vertex (O(E))

​	Put all vertices w/ out-deg=0 at right end of list

​	Decrement out degree of all vertices that have arcs to re

# 12/13/2021

O(V+E) = "Linear Time"

(Aside planarity: O(V+E) = O(V) because of Euler's Formula v-e+f = 2

So for a planar graph $e \le 3v -6$

## 2nd algorithm for Top Sort

Arrange the vertices in reverse finishing time

PF: Let $(u,v) \in E$. Must show Ft(u)>Ft(v)

Ft = finishing time

Case a) u is discovered before v 

​	So, recursive call of dfs for v occurs within recursive call for u, so ft(v) < ft(u).

Case b): v discovered first

​	The dfs call for v occurs before that of u. This call ends when all vertices reachable from v have been visited. But u cannot be reachable from v since the graph is acyclic. So call to dfs of v finishes before u starts and ft(v)<ft(u)

## Strong Components (Just for Digraphs)

u,v are in the same strong component if there are paths both from u to v and from v to u 



If there is an arc from Strong Component A to Strong Component B, there is no arc from SC B to A.

	- Because in that case, there would be a cycle



Given a digraph G, form a new digraph $G^\text{sec}$ whose vertices are the strong components of G, and such that there is an arc (A,B) iff there is an arc $(u,v) \in G$ where $u \in A$, $v \in B$. Then $G^{\text{sec}}$ is a DAG

## Kosaraju's Algorithm

Let G be a digraph

1) Do DFS on G, recording $Ft(v), \forall v \in G$
2) Form $G^T$ (all arcs are reversed). (some advanced topics transpose thing happened here)
   1) Do a DFS on $G^T$ but whenever there is a choice of next vertex, choose one with the higher finishing time
3) Then each set of verices visited

# 2-Satisfiability

## Logic (Propositional)

~ not

$\wedge$ and

$\lor$ or

$\rightarrow$ implies

Given a logical Sentence:

​	Var

​	~s1

​	s1 $\or$ s2

​	s1 $\and$ s2

​	s1 $\rightarrow$ s2

It is easy (given values of vars) to determine if valid

it seems difficult to determine if there is a model (an assignment of truth values to all occuring vars) that satisfies the sentence

## Conjunctive Normal Form

Can convert any logical sentence to CNF:

# 12/16/2021

2-satisfiable if and only if Strong Component contains both p and ~p

## Biconnectivity

A graph is biconnected if no singe vertex deletion will disconnect the graph 	 

(It follows that no single edge deletion disconnects the graph)



A vertex whose deletion disconnects is an arituculation point or cut vertex.

An edge whose deletion ... is a bridge

 

In general a graph is k-connected if the minimum number of vertices removal that disconnects is k.



A maximal subgraph that is 2-connected is a block.

An equivalent relation on edges : 2 edges are equivalent if they belong to a common cycle

Can partition edges into the blocks of the graph





If v has a child u such that the subtree rooted at u has no back-edge to any vertex higher than v, then v is an articulation point



What is the highest vertex connect by a backedge from a vertex in the subtree rooted at u?



```c++
visit(v){
    v.d = ++time;//discovery time (pre-order)
    //put some code here
    //process unvisited numbers
    v.F = ++time; //finishing time (post-order)
}
```

# 12/17/2021

## Union-Find (Online connectivity)

Add edges , keep track of the current number of components 

id(v)

join(v,w)

v,w are conected (at present) iff id(v) == id(w)

```c++
int id(int v){
    while(v!=dad[v]){
        v = dad[v];
    }
    return v;
}
bool connected(int n, int v){
    return id(u)==id(v);
}
int join(int v, int w){
    t = id(v);
    s=id(w);
    if(s!=t){
        dad[s]=t;
        wt[t]+=wt[s];
        return t;
    }
    else{
        dad[t]=s;
        wt[s]+=wt[t];
        return s;
    }

    
}
```

Wit eight balancing,

# 12/20/2021

File I/O: Standard I/O cin/cout printf/scan (Dr. Nevard will redirect input)

Note: If path length = # of edges, then BFS finds lengths of paths starting at $V_0$

BFS: Use a queue. Put $V_0$ on queue

O(V+E)



## Weighted Graphs

Edge = {from, to, weight}

from, to $\in$ V

wt $\in \R$ 

The length of a path = sum of weights of edges in path.

1) Given u, v $\in$ , find length of shortest path between u and v
2) Given u $\in$ V, find lengths of shortest paths to all vertices
3) Find lengths of all shortest paths. $O(V^3)$

Some path finding is harder if negative weights

## Minimum Spanning Tree (MST)

A tree that is a subgraph containing all vertices of the graph

In a weigthed graph, an MST is an ST the sum of whose weights is minimum

Ex. An impovershed town watns to repare some roads. Find the minimum sot so that you can travel between any 2 locations on repaved roads

## Bellman-Ford

Given $V_0$, weighted graph G, negative weights allowed, find shortest paths to all other vertices, & determine if any negative cycles

# 12/21/2021

Bellman-Ford

```c++
if(dad[v1] != v2 && d2>d1+wt(v1,v2))
```

O(VE)

for(i=0;iM|v|-1; ++i)

// relax all edges

Inductively, at kth relaxation of all edges have found all sortest paths from v0 having $\le$ k edges

SUbpaths of shortest paths are shortest paths too

## Dijkstra's algo

("Go tos are considered harmful")

Does not work with negative weights

Find all shortest paths starting at $V_o$

Let $d[v_o]=0$, $d[v]=\infty$ $\forall v \ne v_o$

S = $\{V_0, ..., V_{n-1}\}$

s[v] = true or false

n variant: d[v] $\ge$ actual length of shortest path from v0 to v

for(i =1; i<|v|;++i)P

$i_0 = \text{argmin}\{d[v_i]: v_i \in S\}$ O(lg|V|)

Remove $V_{i_{o}}$ from S

RElax all unfinished numbers of $V_{i_{o}}\cdot O(|V|)$

for each number $V_{i_{o}}$ $\sum{O(lg(v))deg(V_{i_{o}}})$



### 2 implementations

Dense/ Sparse

Dense -> O(M^2)

# 1/3/2022

## Recall: Bellman Ford

Shortest path w/ unrestricted edge weights

Can detect negative cycles.

O(EV)

## Floyd-Warshall

O(V^3) - Finds all distances

If path(AC) is shortest and B is on that path, path(AB) and path(BC) must be shortest paths

```c++

for(int k=0;k<n;++k){
	//Find shortest path from i to j through k
	for(int i=0;i<n;++i){
		for(int j=0; j<n;++j)
			if(d[i][k]+d[k][j]<d[i][j]){
				d[i][j]=d[i][k]+d[k][j];
				p[i][j]=k;
			}
		}
	}
}
```

Here, $d[i][j] =\left\{ \begin{array}{ll}
      0 & \{i,j\} \not\in E \\
      wt[i][j] & \text{else} \\
\end{array}\right\}$

Can be adapted to find transitive closure of a graph; edge between i, j iff every path path between i,j

## Dijkstra's Algorithm

All weights $\ge$ 0

Finds shortest paths from a fixed vertex $v_0$ to all other vertices 

initialize $d(v) = \left\{ \begin{array}{ll}
      0 & v=v_0\\
      \infty & v\ne v_0 \\
\end{array}\right\}$

```c++
for(int i=1;i<n; ++i){
    //Find minimal d(v) for "unfinished" v
    	//have a boolean done[] to mark if the vertices are done
	//Look at all the vertices that are not done and take the index of the smallest one
    //d(v) isn't a programming funtion; it's a math function
    	//you would probably store it in a Struct vertex{... double d; ...} and call g[v].d
	//for each neighbor vk:
       //if (d(w)>d(vk)+wt(vk,w)){
//    		d[w]=d[vk]+wt(vk,w);
//     		p(w) = k;
//
}
}
    
}
```

Dense Dijkstra: O(v^2)

Sparse Dijkstra:

​	Use a heap-based priority-queue

​		Keeip all unfinished vertices v with corr d(v) in Priority Queue

​		O(lg V)

​	O(V lgv +Elgv) = O(Elgv)

# 1/4/22

## Example Dijkstra Algo

Bessie has gone into the swimming pool construction business. Each pool her team designs in an ``m x n`` rectangular grid. To enhance the artistry, she specifies the height of the bottom of the pool on each 1x1 square of the rectangle, ``h[i][j]``, $0 \le i <m$, $0\le j <n$

Water is poured into/onto the pool until equilibrium is reached. Bessie needs to know how much water is in the pool. Determine this

Hint: Use dijkstra's algorithm and interpret "shortest" in a novel way!

Attempt to get a time complexity of O(mn * lg(mn))

# 1/6/22

Kruskal's Algorithm

$E\alpha(E)$

Recall $\alpha(E)<4$ ALWAYS

1. Sort edges by increasing weight O(ElgE)
2. Add edges in order, skipping edges that would create a cycle (using union-find)
   1. Stop when V-1 edges have been added

## Weighted Graphs

### MST

Prim - (E+V)lgv

Kruskal O(ElgE)

### Shortest Path

BFS (if all weights are equal)

Bellman-Ford O(VE) (neg edges)

Floyd-Warshall O(V^3) (all paths)

Dijkstra

