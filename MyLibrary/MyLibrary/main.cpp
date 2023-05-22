#include <iostream>
#include <vector>
#include "book.hpp"
#include "vinyl.hpp"
#include "blueray.hpp"
#include "library.hpp"




int main()
{
	Book harrypotter{ "Harry Potter", "J K Rowling",  1997 };
	Book LOR{ "Lord of the Rings", "J R R Tolkien", 1954 };
	Book thewitcher{ "Witcher", "Andrzej Sapkowski", 1986 };
	Book twilight{ "Twilight", "Stephenie Meyer", 2005 };
	BlueRay WWZ{ "World War Z", "Marc Forster", 2013 };
	BlueRay manOfSteel{ "Man of Steel", "Zack Snyder", 2011 };
	Vinyl abbeyRoad{ "Abbey Road", "The Beatles", 1969 };
	Vinyl nightAtTheOpera{ "Night at the Opera", "Queen", 1975 };

	Library lib;
	lib.addItem(twilight);
	lib.addItem(harrypotter);
	lib.addItem(thewitcher);
	lib.addItem(LOR);
	
	lib.addItem(WWZ);
	lib.addItem(manOfSteel);

	lib.addItem(abbeyRoad);
	lib.addItem(nightAtTheOpera);
	//std::cout << lib.toStringAllLibrary();
	std::cout << lib.toStringBooks() << "\n";
	try {
		lib.sortBooksAlphabethically();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << lib.toStringBooks() << "\n";
	try {
		lib.sortBooksByDate();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << lib.toStringBooks() << "\n";
	return 0;
}
