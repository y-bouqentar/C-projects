#include <iostream>
#include <vector>
#include "book.hpp"
#include "vinyl.hpp"
#include "blueray.hpp"
#include "library.hpp"




int main()
{
	Book harrypotter{ "Harry Potter", "J K Rowling",  1997 };
	Book LOR{ "Lord of the rings", "J R R Tolkien", 1954 };
	BlueRay WWZ{ "World War Z", "Marc Forster", 2013 };
	BlueRay ManOfSteel{ "Man of Steel", "Zack Snyder", 2011 };

	Library lib;
	lib.addItem(harrypotter);
	lib.addItem(LOR);
	lib.addItem(WWZ);
	lib.addItem(ManOfSteel);
	std::cout << lib.toStringAllLibrary();
	std::cout << lib.toStringBooks();
	return 0;
}
