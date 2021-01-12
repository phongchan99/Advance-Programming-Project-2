#include "VideoGame.h"

VideoGame::VideoGame(string id, string title, string ca, string loanType,
int inStock, float rentalFee):Item(id, title, rentType, loanType, inStock, 
rentalFee)

VideoGame::~VideoGame() {}

string VideoGame::toString() {
     cout << id << "," << title << "," << rentType << "," << loanType << "," << inStock << "," << rentalFee << endl;
}

