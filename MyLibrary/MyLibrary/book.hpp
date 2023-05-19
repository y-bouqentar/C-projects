#pragma once
#include<iostream>
#include <chrono>
#include <ctime>

class Book {

public:
	Book(std::string title, std::string author, int date) : _title{ title }, _Author{ author }, _releaseYear{ date } {};
	auto get_Title() -> std::string
	{
		return _title;
	}
	auto get_Author() -> std::string
	{
		return _Author;
	}
	auto get_Date() -> int
	{
		return _releaseYear;
	}
private:
	std::string _title;
	int _releaseYear;
	std::string _Author;

};