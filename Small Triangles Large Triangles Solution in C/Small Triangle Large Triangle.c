#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int comparator(const void *p,const void *q)
{   float a1,a2,l,r;
    triangle* z=(triangle*)p;
    triangle* x=(triangle*)q;
    l=z->a+z->b+z->c;
    l=l/2;
    a1=(l*(l-(z->a))*(l-(z->b))*(l-(z->c)));
    r=x->a+x->b+x->c;
    r=r/2;
    a2=(r*(r-(x->a))*(r-(x->b))*(r-(x->c)));
    return (int)(a1-a2);
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/

qsort(tr,n,sizeof(triangle),comparator);

// qsort() is an in-built function of stdblib.h which is a kind of QuickSort

/*
Check below to know more about qsort()

https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
http://www.cplusplus.com/reference/cstdlib/qsort/   
https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/

*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
