#include<stdio.h>

struct time {
    int h, m, s;
};

int main() {
    struct time t1, t2, diff;
    int choice;

    printf("Enter Choice :\n");
    printf("1. 12 hr format\n");
    printf("2. 24 hr format\n");
    scanf("%d", &choice);

    printf("Enter time1-\n");
    scanf("%d:%d:%d", &t1.h, &t1.m, &t1.s);

    printf("Enter time 2-\n");
    scanf("%d:%d:%d", &t2.h, &t2.m, &t2.s);

    if(t1.s < t2.s) {
        t1.s += 60;
        t1.m--;
    }
    diff.s = t1.s - t2.s;

    if(t1.m < t2.m) {
        t1.m += 60;
        t1.h--;
    }
    diff.m = t1.m - t2.m;

    diff.h = t1.h - t2.h;

    printf("Difference between Time 1 and Time 2 is %d hrs %d mins %d secs",
           diff.h, diff.m, diff.s);

    return 0;
}
