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
