#pragma once
#include <iostream>
#include <string>


class Vinyl {

public :
	Vinyl(std::string title, std::string singer, int date) : _title(title), _singer(singer), _releaseYear(date) {};
	auto get_Title() -> std::string
	{
		return _title;
	}
	auto get_Singer() -> std::string
	{
		return _singer;
	}
	auto get_Date() -> int
	{
		return _releaseYear;
	}
	auto isequal(Vinyl vinyl) -> bool;
private:
	std::string _title;
	std::string _singer;
	int _releaseYear;




};