#include<iostream>
using std::cout;

int main(){

}
/*
 Binary Tree Traversal
 ###############
 Level, In, Pre, Post



 Binary Search Trees
 ###################
 Key must have a type that can be ordered:


 template<class T>
 Bin<T>* search(const Bin<T> *root, const T&key){
    if(!root || root-> key == key){
        return root;
    }
    if(root->key <key){
        return search(root->r,key);
    }
    else{
        return search(root->l,key);
    }
 }

 Observation
 -------------
 In a Binary Search Tree, in-order is in order

 bool insert(Bin<T>* root, const T& key){
    if(!root){
        return Bin<T> key;
    }
    else if(root.key<key){
        if(root->l){
            return insert(root->l,key)
        else{
            root-> r = new Bin<T>(key);
        }
    }
    else if(root.key>key){
        if(root->l){
            return insert(root->l,key)
        else{
            root-> r = new Bin<T>(key);
        }
    }
    else{
        return false;
    }
 }


 Deleting a Node
 Case 1: Delete I - No Children
    delete root->left;
    root->left  = nullptr;
 Case 2: if node has 1 child
    Bin<T> *p =root->r->r
    delete root->r;
    root>.r  = p
 */