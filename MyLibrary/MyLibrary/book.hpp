#pragma once
#include<iostream>
#include <chrono>
#include <ctime>

class Book {

public:
	Book(std::string title, std::string author, std::time_t date) : _title{ title }, _Author{ author }, _releaseDate{ date } {};
	auto get_Title() -> std::string;
	auto get_Author() -> std::string;
	auto get_Date() -> std::time_t;
private:
	std::string _title;
	std::time_t _releaseDate;
	std::string _Author;

};