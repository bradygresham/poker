#include "utils.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    struct card c1, c2;
    setCard(&c1, 1, 's');
    setCard(&c2, 2, 'h');
    struct hand h;
    setHand(&h, c1, c2);

    printf("%c",h);
    return 0;
}