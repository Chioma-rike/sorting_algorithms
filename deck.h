#ifndef DECK_H
#define DECH_H

#include <stdlib.h>

/**
 * ensum kind_o - Enumeration of card suits.
 * @SPADE: Spade suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
typedef enum kind_o
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_a - Playing card
 * @value: Value of the card
 * From "Ace" to "King"
 * @Kind: Kind of the card
 */
typedef struct card_a
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_a
{
	const card_t *card;
	struct deck_node_a *prev;
	struct deck_node_a *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
