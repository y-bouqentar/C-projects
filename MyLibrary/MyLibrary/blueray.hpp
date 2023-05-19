#pragma once
#include<iostream>
#include <chrono>
#include <ctime>

class BlueRay {

public:
	BlueRay(std::string title, std::string director, int date) : _title{ title }, _director{ director }, _releaseYear{ date } {};
	auto get_Title() -> std::string
	{
		return _title;
	}
	auto get_Director() -> std::string
	{
		return _director;
	}
	auto get_Date() -> int
	{
		return _releaseYear;
	}
private:
	std::string _title;
	int _releaseYear;
	std::string _director;

};