#include<iostream>
#include <string>

using namespace std;

class product
{
	protected:
		int productID;
		string productTitle;
		string productGenre;
		int starRating;

	public:

		//Default Constructor
		product();

		//Constructor
		product(int id, string title, string genre, int star);

		//Adds product to database inventory
		void addProduct(product p1);

		//Deletes product from database inventory
		void deleteProduct(int id);

		//Searches product by ID
		void searchProduct(int id);

		//Searches product by Name
		void searchProduct(string name);

		//Destructor
		~product();
};
