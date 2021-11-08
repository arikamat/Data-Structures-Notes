#include<iostream>
using std::cout;
template<class T>
struct Bin{
    T info;
    int cnt; //number of elements in the subtree rooted here
    Bin *l, *r;
};
int main(){

}
Bin* rr (Bin* q){
    Bin* p = q -> l;    
    q->l = p->r;
    p->r = q;
    return p;   
}