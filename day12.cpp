#include<iostream>
using std::cout;

template<class T>
struct Bin{
    T info;
    int cnt; //number of elements in the subtree rooted here
    Bin *l, *r;
};
int ct;
template<class T>
Bin<T>* find(const Bin<T> *root, int idx){
    //find the idx-th element in the binary tree
    ct = 0;
    if root{
        return nullptr;
    }
    /*while(ct<idx){
        if()
    }*/
}

/*Balanced Trees
AVL-Trees (earliest in 1962)
    - |height(left)-height(right)|<=1
    - Number of nodes in a tree with height h is <= 1+ N(n-1) +N(n-2)
    - Let A(h) = N(h) + x
    - A(h) - x = 1 + [A(h-1) -x] + [A(h-2)-x]
    - A(h) = (1-x) + [A(h-1)] + [A(h-2)]
    -Let x = 1 so that it A(h) resembles fibb
Red-Black - CLRS
Splay Trees
alpha-trees (weight balanced trees)
-----
b-trees (not binary)
*/
int main(){

}