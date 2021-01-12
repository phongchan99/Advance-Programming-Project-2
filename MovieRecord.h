#include "Item.h"

class MovieRecord : public Item {
public:
	MovieRecord();
	MovieRecord(string id, string title, Genre genre, float rentalFee);
	MovieRecord(string id, string title, Genre genre, int inStock, float rentalFee);

	RentalType getRentaltype() {
		return RentalType::MOVIE_RECORD;
	}
};