#include<iostream>
#include "Library.hpp"
#include <string>
#include <sstream>


auto Library::toStringAllLibrary() -> std::string 
{
	if (get_Books().empty() && get_Vinyls().empty() && get_BlueRays().empty())
	{
		std::cout << "Your Library is empty" << std::endl;
		return;
	}
	std::ostringstream oss;
	if (!get_Books().empty())
	{
		for (int i = 0; i < get_Books().size(); i++)
		{
			auto book = get_Books().at(i);
			oss << "The book number " << (i + 1) << " is " << book.get_Title() << " written by "
				<< book.get_Author() << " in " << book.get_Date() << "\n";
		}
	}
	if (!get_Vinyls().empty())
	{
		for (int i = 0; i < get_Vinyls().size(); i++)
		{
			auto vinyl = get_Vinyls().at(i);
			oss << "The vinyl number " << (i + 1) << " is " << vinyl.get_Title() << " sung by "
				<< vinyl.get_Singer() << " in " << vinyl.get_Date() << "\n";
		}
	}
	if (!get_BlueRays().empty())
	{
		for (int i = 0; i < get_BlueRays().size(); i++)
		{
			auto blueRay = get_BlueRays().at(i);
			oss << "The movie number " << (i + 1) << " is " << blueRay.get_Title() << " directed by "
				<< blueRay.get_Director() << " in " << blueRay.get_Date() << "\n";
		}
	}
	return oss.str();
}
auto Library::toStringBooks() -> std::string
{
	if (get_Books().empty())
	{
		return {};
	}
	std::ostringstream booksOutput;
	for (int i = 0; i < get_Books().size(); i++)
	{
		auto book = get_Books().at(i);
		booksOutput << "The book number " << (i + 1) << " is " << book.get_Title() << " written by " << book.get_Author() << " in "
			<< book.get_Date() << "\n";
	}
	return booksOutput.str();
}
auto Library::toStringVinyls() -> std::string
{
	if (get_Vinyls().empty())
	{
		return {};
	}
	std::ostringstream vinylOutput;
	for (int i = 0; i < get_Vinyls().size(); i++)
	{
		auto vinyl = get_Vinyls().at(i);
		vinylOutput << "The vinyl number " << (i + 1) << " is " << vinyl.get_Title() << " sung by "
			<< vinyl.get_Singer() << " in " << vinyl.get_Date() << "\n";
	}
	return vinylOutput.str();
}
auto Library::toStringBlueRays() -> std::string
{
	if (get_BlueRays().empty())
	{
		return {};
	}
	std::ostringstream blueRayOutput;
	for (int i = 0; i < get_BlueRays().size(); i++)
	{
		auto blueRay = get_BlueRays().at(i);
		blueRayOutput << "The movie number " << (i + 1) << " is " << blueRay.get_Title() << " directed by "
			<< blueRay.get_Director() << " in " << blueRay.get_Date() << "\n";
	}
	return blueRayOutput.str();
}
auto Library::toStringRentedItems() -> std::string
{
	if (get_RentedItems().empty())
	{
		return {};
	}
	std::ostringstream rentedItemsOutput;
	for (auto item : get_RentedItems())
	{
		rentedItemsOutput << "Item " << item << " is currently rented " << "\n";
	}
	return rentedItemsOutput.str();
}
auto Library::sortBooksAlphabethically() -> void
{
		// auto books = get_Books();I need to do const auto* for pointer but const won't allow the sorting so I use the value directly
		if (_books.size() < 2)
		{
			std::cout << "Cannot perform sorting. Your book library contains less than 2 books" << std::endl;
			return;
		}
		std::sort(_books.begin(), _books.end(), [](Book& book1, Book& book2) {
			return book1.get_Title() < book2.get_Title();
			});
	
}
auto Library::sortVinylsAlphabethically() -> void
{
	 
	if (_vinyls.size() < 2)
	{
		std::cout << "Cannot perform sorting. Your Vinyl library contains less than 2 Vinyls" << std::endl;
		return;
	}
	std::sort(_vinyls.begin(), _vinyls.end(), [](Vinyl vinyl1, Vinyl vinyl2) {
		return vinyl1.get_Title() < vinyl2.get_Title();
		});
}
auto Library::sortBlueRaysAlphabethically() -> void
{
	
	if (_bluerays.size() < 2)
	{
		std::cout << "Cannot perform sorting. Your BlueRay library contains less than 2 blueRays" << std::endl;
		return;

	}
	std::sort(_bluerays.begin(), _bluerays.end(), [](BlueRay blueRay1, BlueRay blueRay2) {
		return blueRay1.get_Title() < blueRay2.get_Title();
		});
}
auto Library::sortBooksByDate() -> void
{
	if (_books.size() < 2)
	{
		std::cout << "Cannot perform sorting. Your Book library contains less than 2 books" << std::endl;
		return;

	}
	std::sort(_books.begin(), _books.end(), [](Book& book1, Book& book2) {
		return book1.get_Date() < book2.get_Date();
		});
}
auto Library::sortVinylsByDate() -> void
{
	if (_vinyls.size() < 2)
	{
		std::cout << "Cannot perform sorting. Your Vinyl library contains less than 2 Vinyls" << std::endl;
		return;

	}
	std::sort(_vinyls.begin(), _vinyls.end(), [](Vinyl& vinyl1, Vinyl& vinyl2) {
		return vinyl1.get_Date() < vinyl2.get_Date();
		});
}
auto Library::sortBlueRaysByDate()->void
{
	
	if (_bluerays.size() < 2)
	{
		std::cout << "Cannot perform sorting. Your BlueRay library contains less than 2 BlueRays" << std::endl;
		return;

	}
	std::sort(_bluerays.begin(), _bluerays.end(), [](BlueRay& blueRay1, BlueRay& blueRay2) {
		return blueRay1.get_Date() < blueRay2.get_Date();
		});
}
