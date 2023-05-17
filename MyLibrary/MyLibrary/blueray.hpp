#pragma once
#include<iostream>
#include <chrono>
#include <ctime>

class BlueRay {

public:
	BlueRay(std::string title, std::string director, std::time_t date) : _title{ title }, _director{ director }, _releaseDate{ date } {};
	auto get_Title() -> std::string;
	auto get_Director() -> std::string;
	auto get_Date() -> std::time_t;
private:
	std::string _title;
	std::time_t _releaseDate;
	std::string _director;

};