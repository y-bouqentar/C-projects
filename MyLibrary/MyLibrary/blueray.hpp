#include<iostream>
#include <chrono>
#include <ctime>

class BlueRay {

public:
	BlueRay(std::string title, std::string Director, std::time_t date);
	auto get_Title() -> std::string;
	auto get_Director() -> std::string;
	auto get_Date() -> std::time_t;
private:
	std::string _title;
	std::time_t _releaseDate;
	std::string _Director;

};