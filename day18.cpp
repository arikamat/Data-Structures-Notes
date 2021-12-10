/*
Quicksort (Tony Hoare)
0. pick an element p (which stands for pivot)
1. partition all emements <p to the left, all elements > p to the right
2. Recursively sort both halves.

vanila strawberry
cofee
chocolate

##########
Vanilla Quick Sort
##########
void qs1(int a[], int l0, int hi){
    if(l0<ih){
        int m = qs1Partition(a,lo,hi);
        qs1(a,l0, m-1)
        qs1(a,m,hi)
    }
}
int qs1Partition(int a[], int lo, int hi){
    int x = a[lo];
    while(lo<=hi){
        while(a[lo]<x) ++lo;
        while)([hi]>x) --hi;
        if(lo<= hi){
            int t= a[lo];
            a[lo++] = a[hi];
            a[hi--] = t;
        }
    }
    return lo;
}

O(n^2) if almost sorted
Can cras: depth of recursion can be theta(n

###########
Strawberry Quicksort
###########
void qs2(int a[], int lo, int hi){
    while(lo<hi){
        int m=qs1Partition(a,lo,hi); //same partition method as vanilla partition
        if(m-lo<hi-m+1){
            qs2(a,lo,m-1);
            lo=m;
        }
        else{
            qs2(a,m,hi);
            hi = m-1;
        }
    }
}
#############
Coffee
################
int qs3Partition(int a[], int lo, int hi){
    int x = medianOf3(a,lo,hi);
    while(lo<=hi){
        while(a[lo]<x) ++lo;
        while)a[hi]>x) --hi;
        if(lo<= hi){
            int t= a[lo];
            a[lo++] = a[hi];
            a[hi--] = t;
        }
    }
    return lo;
}

Chocolare
##################
quicksort(int a[], int n){
    qs4(a,0,n-1);
    inertionSort(a,n);
}

void qs4(int a[], int lo, int hi){
    while(hi-lo>THRESHOLD){
        int m=qs1Partition(a,lo,hi); //same partition method as vanilla partition
        if(m-lo<hi-m+1){
            qs4(a,lo,m-1);
            lo=m;
        }
        else{
            qs4(a,m,hi);
            hi = m-1;
        }
    }
}
*/