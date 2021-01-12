#include "Item.h"

class VideoGame : public Item {
public:
	VideoGame();
	VideoGame(string id, string title, string rentType, string loanType, int inStock, float rentalFee);

	string toString() {}
};