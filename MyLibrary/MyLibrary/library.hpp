#pragma once
#include <iostream>
#include <vector>
#include "book.hpp"
#include "vinyl.hpp"
#include "blueray.hpp"
#include <string>
#include <algorithm>
#include <stdexcept>



class Library {


private:
	std::vector<Book> _books;
	std::vector<Vinyl> _vinyls;
	std::vector<BlueRay> _bluerays;
	std::vector<std::string> _rentedItems;
public:
	auto get_Books() -> std::vector<Book>//note : I have a seen online that people do reference here so auto* and I don't get why
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
	template<typename T2>
	auto addItem(T2 item) -> bool
	{
		if (exists(item))
		{
			return false; // The item is already rented, so you cannot rent it again.
		}

		if constexpr (std::is_same<T2, Book>::value)//still unsure about the exact use of constexpr 
		{
			_books.push_back(item);
		}
		else if constexpr (std::is_same<T2, Vinyl>::value)
		{
			_vinyls.push_back(item);
		}
		else if constexpr (std::is_same<T2, BlueRay>::value)
		{
			_bluerays.push_back(item);
		}
		else { return false; }//wrong class given

		return true;//item successfully rented
	}
	template<typename T>
	auto isrented(T item) -> bool
	{
		if constexpr (std::is_same<T, Book>::value)
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
		else if constexpr (std::is_same<T, Vinyl>::value)
		{
			for (int i = 0; i < _rentedItems.size(); i++)
			{
				if (_rentedItems.at(i) == static_cast<Vinyl>(item).get_Title())
				{
					return true;
				}
			}
		}
		else if constexpr(std::is_same<T, BlueRay>::value)
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
	auto exists(const T& item) -> bool
	{
		if constexpr (std::is_same<T, Book>::value)
		{
			if (get_Books().empty())
			{
				return false;
			}
			for (int i = 0; i < get_Books().size(); i++)
			{
				if (get_Books().at(i).isequal(static_cast<Book>(item)))
				{
					return true;
				}
			}
		}
		else if constexpr (std::is_same<T, Vinyl>::value)
		{
			if (get_Vinyls().empty())
			{
				return false;
			}
			for (int i = 0; i < get_Vinyls().size(); i++)
			{
				if (get_Vinyls().at(i).isequal(static_cast<Vinyl>(item)))
				{
					return true;
				}
			}
		}
		else if constexpr (std::is_same<T, BlueRay>::value)
		{
			if (get_BlueRays().empty())
			{
				return false;
			}
			for (int i = 0; i < get_BlueRays().size(); i++)
			{
				if (get_BlueRays().at(i).isequal(static_cast<BlueRay>(item)))
				{
					return true;
				}
			}
		}
				return false;
		
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
			if (std::is_same<T, Book>::value)//i chose this approach to mimic a real-life notebook of the rented or not rented book, but it comes with extra work
			{
				_rentedItems.push_back(static_cast<Book>(item)._title);
			}
			else if (std::is_same<T, Vinyl>::value)
			{
				_rentedItems.push_back(static_cast<Vinyl>(item)._title);
			}
			else if (std::is_same<T, BlueRay>::value)
			{
				_rentedItems.push_back(static_cast<BlueRay>(item)._title);
			}
			else { return false; }
			
			return true;//item successfully rented
		}
		auto sortBooksAlphabethically() -> void;
		auto sortVinylsAlphabethically() -> void;
		auto sortBlueRaysAlphabethically() -> void;
		auto sortBooksByDate() -> void;
		auto sortVinylsByDate() -> void;
		auto sortBlueRaysByDate() -> void;
		
	
		
};