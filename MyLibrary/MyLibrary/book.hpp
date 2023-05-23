#pragma once
#include<iostream>
#include <chrono>
#include <ctime>

class Book {

public:
	Book(std::string title, std::string author, int date) : _title{ title }, _author{ author }, _releaseYear{ date } {};
	auto get_Title() -> std::string
	{
		return _title;
	}
	auto get_Author() -> std::string
	{
		return _author;
	}
	auto get_Date() -> int
	{
		return _releaseYear;
	}
	auto isequal(Book book) -> bool;
private:
	std::string _title;
	int _releaseYear;
	std::string _author;

};