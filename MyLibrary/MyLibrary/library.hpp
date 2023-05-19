#pragma once
#include <iostream>
#include <vector>
#include "book.hpp"
#include "vinyl.hpp"
#include "blueray.hpp"
#include <string>



class Library {


private:
	std::vector<Book> _books;
	std::vector<Vinyl> _vinyls;
	std::vector<BlueRay> _bluerays;
	std::vector<std::string> _rentedItems;
public:
	auto get_Books() -> std::vector<Book>
	{
		return _books;
	}
	auto get_Vinyls() -> std::vector<Vinyl>
	{
		return _vinyls;
	}
	auto get_BlueRays() -> std::vector<BlueRay>
	{
		return _bluerays;
	}
	auto get_RentedItems() -> std::vector<std::string>
	{
		return _rentedItems;
	}
	template<typename T>
	auto addItem(T item) -> bool
	{
		if (exists(item))
		{
			return false;//the item is rented already therefore you cannot rent it
		}

		if constexpr (std::is_same<T, Book>::value)//still unsure about the exact use of constexpr 
		{
			_books.push_back(item);
		}
		else if constexpr (std::is_same<T, Vinyl>::value)
		{
			_vinyls.push_back(item);
		}
		else if constexpr (std::is_same<T, BlueRay>::value)
		{
			_bluerays.push_back(item);
		}
		else { return false; }

		return true;//item successfully rented
	}
	template<typename T>
	auto isrented(T item) -> bool
	{
		if constexpr (std::is_same<T, Book>)
		{
			for (int i = 0; i < _rentedItems.size(); i++)
			{
				if (_rentedItems.at(i) == static_cast<Book>(item).get_Title())//go through all the rented titles, if one of them matches 
					//the books then it is rented so we return true
				{
					return true;
				}
			}
		}
		else if constexpr (std::is_same<T, Vinyl>)
		{
			for (int i = 0; i < _rentedItems.size(); i++)
			{
				if (_rentedItems.at(i) == static_cast<Vinyl>(item).get_Title())
				{
					return true;
				}
			}
		}
		else if constexpr(std::is_same<T, BlueRay>)
		{
			for (int i = 0; i < _rentedItems.size(); i++)
			{
				if (_rentedItems.at(i) == static_cast<BlueRay>(item).get_Title())
				{
					return true;
				}
			}
		}
		return false;
	}
	template<typename T>
	auto exists(T item) -> bool
	{
		return false;//to be implemented later TO DO
	}
	template<typename T>
	auto find(std::string title) -> T //takes a string title and return the vector element associated with that name
	{
		for (int i = 0; i < _books.size(); i++)//it could've been cut into 3 different methods findbook / findvinyl and so on but I chose this one for more compactness
		{
			if (_books.at(i).get_Title() == title)
			{
				return _books.at(i);
			}
		}
		for (int i = 0; i < _vinyls.size(); i++)//if not found at books then vinyls
		{
			if (_vinyls.at(i).get_Title() == title)
			{
				return _vinyls.at(i);
			}
		}
		for (int i = 0; i < _bluerays.size(); i++)
		{
			if (_bluerays.at(i).get_Title() == title)
			{
				return _bluerays.at(i);
			}
		}
		return T(); //if nothing is found
	}
	auto toStringBooks() -> std::string;
	auto toStringVinyls() -> std::string;
	auto toStringBlueRays() -> std::string;
	auto toStringAllLibrary() -> std::string;
	

		template<typename T>
		auto rentItem(T item) -> bool
		{
			if (isrented(item))
			{
				return false;//the item is rented already therefore you cannot rent it
			}
			if (std::is_same<T, Book>)//i chose this approach to mimic a real-life notebook of the rented or not rented book, but it comes with extra work
			{
				_rentedItems.push_back(static_cast<Book>(item)._title);
			}
			else if (std::is_same<T, Vinyl>)
			{
				_rentedItems.push_back(static_cast<Vinyl>(item)._title);
			}
			else if (std::is_same<T, BlueRay>)
			{
				_rentedItems.push_back(static_cast<BlueRay>(item)._title);
			}
			else { return false; }
			
			return true;//item successfully rented
		}
		template<typename T>
		auto sortByAuthor(std::string author) -> std::vector<T>;
		template<typename T>
		auto sortbyDate(std::time_t date) -> std::vector<T>;
	
		
};