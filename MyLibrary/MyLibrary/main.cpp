#include <iostream>
#include <vector>
#include "Book.hpp"
#include "Vinyl.hpp"
#include "Blueray.hpp"
#include "Library.hpp"




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
	//add a program part to ask the user to enter books and so on
	Library lib;
	Library lib2;

	lib.addItem(twilight);
	lib.addItem(harrypotter);
	lib.addItem(thewitcher);
	lib.addItem(LOR);
	
	lib.addItem(WWZ);
	lib.addItem(manOfSteel);

	lib.addItem(abbeyRoad);
	lib.addItem(nightAtTheOpera);
	//std::cout << lib.toStringAllLibrary();
	/*try {
		std::cout << lib.toStringBooks() << "\n";
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}*/
	/*try {
		lib.sortBooksAlphabethically();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}*/
	//std::cout << lib.toStringBooks() << "\n";
	try {
		lib.sortBooksByDate();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << lib.toStringVinyls();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;

	}
	try {
		std::cout << lib.toStringBooks() << "\n";
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::string finder{ "Harry Potter" };
	try {
		std::cout << lib.find<Book>(finder).get_Title() << "\n";
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::boolalpha << lib.rentItem(harrypotter) << std::endl;
	try {
		std::cout << lib.toStringRentedItems();
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	//std::cout << std::boolalpha << lib.isrented(harrypotter) << std::endl;
	return 0;
}
