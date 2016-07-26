#include "lfq.h"
#include <stdio.h>

int main(int argc, char **argv)
{
        struct lfq *q=make_new_lfq(1000);
        int a;
        int b;
        a=50;b=4;
        int c,d;
        enqueue(q, a);
        enqueue(q, b);
        if (dequeue(q,&c)!=-1) {
                printf("main %d\n", c);
        };
        if (dequeue(q,&c)!=-1) {
                printf("main %d\n", c);
        };


        return 0;
}
