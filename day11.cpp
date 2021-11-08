#include<iostream>
using std::cout;

int main(){

}
/*
 Iterators
 #########
 In <vector> begin() and end() return iterators

 type of iterator is vector<T>::iterator
 vector<T>::const_iterator

 for(auto i =a.begin(); i!=a.end();++i){
    visit(*i);
 }

 How to access next element in a binary tree

 stack<Bin<T>*> it;

 -----

 if(/* x has a right child *\/){
    next = leftmost(x->r);
 }
 else{
    while(!it.empty){
        p = it.top(); it.pop();
        if(p->l == x){
            //Found next
            //update
            break;
        }
    }
    if(it.empty()){

    }
 }
 */

