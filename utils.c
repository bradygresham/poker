#include "utils.h"

void setHand(struct hand *h, struct card c1, struct card c2)
{
    h->cards[0] = c1;
    h->cards[1] = c2;
}
