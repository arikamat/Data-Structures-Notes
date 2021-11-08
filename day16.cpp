#include<iostream>
#include<vector>
using std::cout;
using std::vector;

void swap(vector<int>& a, int b, int c){
    int temp = a.at(b);
    a.at(b) = a.at(c);
    a.at(c) = temp;

}
void isort(vector<int>& a){
    for(int i=1; i<a.size();i++){
        int currIndex = i;
        while(a.at(currIndex)<a.at(currIndex-1) && currIndex-1>=0){
            swap(a,i-1,i);
            currIndex--;
        }
    }
}

int main(){

}   

/*
Sorting
#######
Internal vs External Storage
          | Sort & Merge

Other Uses
###########
Reduce to a canonical form to compare
Given 2 sets S1, S2, is s1 c s2?
theta(n^2) vs theta(nlgn)

Insertion Sort
------------------
theta(n^2)
when array is almost sorted, insertion sort is very fast
suppose we have an array [3,1,5,1,5,9,2,6,5,3,5]
best case: O(n) iff array is sorted
average case: O(n^2) iff a reverse sorted

worst case:
suppose we have an array [3,1,5,1,5,9,2,6,5,3,5]
A sort is stable if elements with equal keys retain initial relative order 

Time = C+D_n + sum(A_i) from i=1 to n
best --> c+E_n
Worst --> c+D_n + sum(i) from i=1 to n = c+D_n + (n)(n+1)/2
average --> C+D_n + sum(A_i) from i=1 to n =c+D_n + 1/4n^2

"Bubble sort is useless"

Merge Sort
#############
top down
--------------
Sort left half
sort right half
Merge 2 halves

bottom up
-----------------
Merge pairs of 2^k - element pieces

main problem of merge sort is that it requires double the space and thus requires external storage
advantage - merge sort is stable


MERGE MIGHT SHOW UP ON A TEST - INDIRECTLY SAID     
SOMETHING LIKE THE FOLLOWING
merge(vector<T>&c, const Vector<T>&a,const Vector<T>&b){
    //Since a and b are constants a/b are being merged into c
}

*/
