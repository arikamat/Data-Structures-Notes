#include<iostream>
using std::cout;

int main(){

}
/*
Binary Trees
############################
 template<class T>
 struct Bin{
    T info;
    Bin<T> *left, *right;

#################
 Recursive Definition
 A binary tree is either
 a) empty
 b) has a root and a left an right child that are binary trees.
####################
 template<class T>
 int size(Bin<T> *root){
    if(!root){
    return 0;
    }
    return 1 + size(root->left)+size(root->right);
 }

 Do Now:
 Write
 template <class T>
 Bin<T>* leftmost(Bin<T> *root){
 while(root->left){
  root = root->left;
 }
 return root;
 }

 alternatively you can write
 template <class T>
 Bin<T>* leftmost(Bin<T> *root){
 return leftmost(root->left);
 }
 ####################
 Binary Tree Traversal
 Visit all nodes | 4 ways
 1) Level Order: Top to bottom, left to right.
 2) in-order - Root visited in between left and right subtrees
 3) pre-order - Root visited in before left and right subtrees
 4) post-order - Root visited in after left and right subtrees

 Do Now: Implement level-order
 template<class T, class Visit>
 void level_order(Bin<T>*root,Visit v){
    //Visit will do whatever the code wants us to do when we visit the node
    //we sould just have to call v(*p); //when visiting node at p, print it out, add it to vector, etc.
    vector<t> vect;
    vect.push_back(root)
    while(!vect.empty()){
        Bin<T> *node = vect.pop_back(0);
        v(node);
        if(node->left){
            vect.push_back(node->left);
        }
        if(node->right){
            vect.push_back(node->right);
        }
    }

 alternate solution:
 template<class T, class Visit>
 void level_order(Bin<T>*root,Visit v){
    queue<Bin<T>*> q;
    if(!root){
        return;
    }
    q.push_back(root);
    while(!q.empty()){
        root = q.front(); q.pop_front();
        v(root);
        if(root->left){
            q.push_back(root->left);
        }
        if(root->right){
            q.push_back(root->right);
        }
    }
    while(!vect.empty()){
        Bin<T> *node = vect.pop_back(0);
        v(node);
        if(node->left){
            vect.push_back(node->left);
        }
        if(node->right){
            vect.push_back(node->right);
        }
    }


 void in_order(Bin<T> *root, Visit v){
    if(root){
        in_order(root->left,v)
        v(root);
        in_order(root->right,v);
    }
 }
 */