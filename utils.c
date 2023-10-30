#include "utils.h"

void setCard(struct card *c, int value, char suit)
{
    c->value = value;
    c->suit = suit;
}

void setHand(struct hand *h, struct card c1, struct card c2)
{
    h->cards[0] = c1;
    h->cards[1] = c2;
}

int getCardValue(struct card c)
{
    return c.value;
}

int getCardSuit(struct card c){
    return c.suit;
}
