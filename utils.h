enum suits{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

enum values{
    LOW_ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    HIGH_ACE
};

struct card{
    enum values value;
    enum suits suit;
};

struct hand{
    struct card cards[2];
};

struct deck{
    struct card cards[52];
};

//setters
extern void setCard(struct card *c, int value, char suit);
extern void setHand(struct hand *h, struct card c1, struct card c2);

//getters
extern int getCardValue(struct card c);
extern int getCardSuit(struct card c);
