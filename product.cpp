#include "product.h"

//Default Constructor
product::product()
{}

//Constructor
product::product(int id, string title, string genre, int star)
{
	productID = id;
	productTitle = title;
	productGenre = genre;
	starRating = star;
}

//Add product to database/inventory
void product::addProduct(product p1)
{
	//Attach to linked list
	//Add to database
}

//Destructor
product::~product()
{}
