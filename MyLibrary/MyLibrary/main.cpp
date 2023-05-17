#include <iostream>
#include <vector>
#include "book.hpp"
#include "vinyl.hpp"
#include "blueray.hpp"
#include "library.hpp"




int main()
{
	Book harrypotter{ "Harry Potter", "J K Rowling", 01 / 01 / 1997 };
	Book LOR{ "Lord of the rings", "J R R Tolkien", 01 / 01 / 1954 };
	BlueRay WWZ{ "World War Z", "Marc Forster", 01 / 01 / 2013 };
	BlueRay ManOfSteel{ "Man of Steel", "Zack Snyder", 01 / 01 / 2011 };

	Library lib;
	lib.addItem(harrypotter);
	lib.addItem(LOR);
	lib.addItem(WWZ);
	lib.addItem(ManOfSteel);

	return 0;
}
