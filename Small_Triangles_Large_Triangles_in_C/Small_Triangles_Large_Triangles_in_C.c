/*Problem
You are given n triangles, specifically, their sides ai, bi and ci. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides a, b and c is Heron’s formula:

 s = p x [(p -a) x (p -b) x (p – c)]^1/2 where p = a + b + c / 2.

Input Format
The first line of each test file contains a single integer n. n lines follow with three space-separated integers, ai, bi and ci.

Constraints
1 <= n <= 100
1 <= ai, bi, ci <= 70
ai + bi > ci, ai + ci > bi and bi + ci > ai.
Output Format
Print exactly n lines. On each line print 3 space-separated integers, the ai, bi and ci of the corresponding triangle.

Sample Input 0

3
7 24 25
5 12 13
3 4 5
Sample Output 0

3 4 5
5 12 13
7 24 25
Explanation 0

The square of the first triangle is 84. The square of the second triangle is 30. The square of the third triangle is 6. So the sorted order is the reverse one.*/

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
float area(triangle tr) {
    float p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

int cmp(const void* a, const void* b) {
    float areaA = area(*(triangle*)a);
    float areaB = area(*(triangle*)b);
    if (areaA < areaB) {
        return -1;
    } else if (areaA > areaB) {
        return 1;
    } else {
        return 0;
    }
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr, n, sizeof(triangle), cmp);
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