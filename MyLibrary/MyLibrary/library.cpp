#include<iostream>
#include "library.hpp"
#include <string>
#include <sstream>


auto Library::toStringAllLibrary() -> std::string 
{
	std::ostringstream oss;

	for (int i = 0; i < get_Books().size(); i++)
	{
		auto book = get_Books().at(i);
		oss << "The book number " << (i + 1) << " is " << book.get_Title() << " written by "
			<< book.get_Author() << " in " << book.get_Date() << "\n";
	}

	for (int i = 0; i < get_Vinyls().size(); i++)
	{
		auto vinyl = get_Vinyls().at(i);
		oss << "The vinyl number " << (i + 1) << " is " << vinyl.get_Title() << " sung by "
			<< vinyl.get_Singer() << " in " << vinyl.get_Date() << "\n";
	}

	for (int i = 0; i < get_BlueRays().size(); i++)
	{
		auto blueRay = get_BlueRays().at(i);
		oss << "The movie number " << (i + 1) << " is " << blueRay.get_Title() << " directed by "
			<< blueRay.get_Director() << " in " << blueRay.get_Date() << "\n";
	}

	return oss.str();
}
auto Library::toStringBooks() -> std::string
{
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
	std::ostringstream blueRayOutput;
	for (int i = 0; i < get_BlueRays().size(); i++)
	{
		auto blueRay = get_BlueRays().at(i);
		blueRayOutput << "The movie number " << (i + 1) << " is " << blueRay.get_Title() << " directed by "
			<< blueRay.get_Director() << " in " << blueRay.get_Date() << "\n";
	}
	return blueRayOutput.str();
}