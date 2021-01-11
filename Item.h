#pragma once

#include <iostream>
#include <string>

using namespace std;

enum class RentalType { MOVIE_RECORD, DVD, VIDEO_GAME, UNSPECIFIED };

enum class Status { BORROWED, AVAILABLE };

enum class LoanType { TWO_DAY, ONE_WEEK };

enum class Genre { ACTION, HORROR, DRAMA, COMEDY, UNSPECIFIED };

class Item
{
public:
	Item();
	Item(string id, string title, float fee);
	Item(string id, string title, int numCopies, float fee);
	~Item();

	string getID();
	string getTitle();
	bool borrowing();
	bool returning();
	Genre getGenre();
	LoanType getLoanType();
	int getInStock();
	Status getStatus();
	bool addCopies(int num);


	virtual RentalType getRentalType() = 0;

	string id = "";
	string title = "";
	Genre genre = Genre::UNSPECIFIED;
	LoanType loanType = LoanType::TWO_DAY;
	int inStock = 0;
	float rentalFee = 0;
	Status status = Status::AVAILABLE;
};


class MovieRecord : public Item {
public:
	MovieRecord();
	MovieRecord(string id, string title, Genre genre, float rentalFee);
	MovieRecord(string id, string title, Genre genre, int inStock, float rentalFee);

	RentalType getRentaltype() {
		return RentalType::MOVIE_RECORD;
	}
};

class DVD : public Item {
public:
	DVD();
	DVD(string id, string title, Genre genre, float rentalFee);
	DVD(string id, string title, Genre genre, int inStock, float rentalFee);

	RentalType getRentaltype() {
		return RentalType::DVD;
	}
};

class VideoGame : public Item {
public:
	VideoGame();
	VideoGame(string id, string title, float rentalFee);
	VideoGame(string id, string title, int inStock, float rentalFee);

	RentalType getRentaltype() {
		return RentalType::VIDEO_GAME;
	}
};