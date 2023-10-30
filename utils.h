struct card{
    int value;
    char suit;
};

struct hand{
    struct card cards[2];
};

struct deck{
    struct card cards[52];
};

extern void setHand(struct hand *h, struct card c1, struct card c2);