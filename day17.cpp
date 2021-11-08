/*
Merge Sort
##########

void merge(vector<T>&c, const Vector<T>&a,const Vector<T>&b){
    int i =0;
    in j=0;
    for(i=0,j=0; (i+j)<a.size()+b.size();){
        if(a.at(i)<b.at(j)){
            c.push_back(a.at(i));
            i++;
        }
        else{
            c.push_back(b.at(j))
            j++;
        }
    }
}

template<clas It>
void merge(It ic, It ia0, It ia1, It ib0, It ib1){
    while(ia0!=ia1 && ib0 !=ib1){
        *ic++ = (*ia0 <= *ib0 ?*ia0++:*ib0++);
    }
    while(ia0!=ia1){
        *ic++ = *ia0++;
    }
    while(ib0!=ib1){
        *ic++ = *ib0++;
    }
}



struct Link{
    Link *next;
    T info;
}

Link<T> *sort(Link<T> *head){
    if(!head || !head->next){
        return head;
    }
}
void split(Node *head, Node** frontPtr, Node** backPtr){
    Node *a;
    for(a = head, Node*b = head->next; b!= NULL; b=b->next){
        if(b!=NULL){
            a=a->next;
            b=b->next;
        }
    }
    frontPtr = head
    backPtr = a->next;
    a->next=NULL;
}


nevard's answer
-------------------
LInkMT>* sort(Link<T> *head){
    if(!head||!head->next){
        return head;
    }
    p=head;
    q=head->next;
    while(q->next &&q->next->next){
        p=p->next;
        q=q->next->next;
    }
    q=p->next;
    p->next = nullptr
    p=sort(head);
    q = sort(q);
    return merge(p,q);
}


Inversion
#####
a_0.......a_i......... a_j ............. a_n
An inversion is a pair i,j such that i<j but a_i<a_j
Can count inversions in O(nlgn)
Hint: MOdify Mergesort
*/