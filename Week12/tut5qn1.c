#include <stdio.h>
#include <math.h>

struct circle {
    double radius;
    double x;
    double y;
};

int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

int main() {
    struct circle c1 = {4,2,2};
    struct circle c2 = {1,0,0};
    intersect(c1, c2) ? puts("circles intersect") : puts("no intersect");
    contain(&c1, &c2) ? puts("c1 contains c2") : puts("c2 not in c1");
    return 0;
}

//(a)
int intersect(struct circle c1, struct circle c2) {
    double dx = c2.x - c1.x;
    double dy = c2.y - c1.y;
    double dist = sqrt(pow(dx,2) + pow(dy,2));
    double rsum = c1.radius + c2.radius;
    if (dist <= rsum) return 1; //circles intersect
    return 0; //no intersect
}

//(b)
int contain(struct circle *c1, struct circle *c2) {
    double dx = c2->x - c1->x;
    double dy = c2->y - c1->y;
    double dist = sqrt(pow(dx,2) + pow(dy,2));
    double tsum = c2->radius + dist;
    if (c1->radius >= tsum) return 1; //c1 contains c2
    return 0; //c2 not in c1
}