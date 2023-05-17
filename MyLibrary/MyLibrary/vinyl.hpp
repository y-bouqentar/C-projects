#pragma once
#include <iostream>
#include <string>


class Vinyl {

public :
	Vinyl(std::string title, std::string Singer, std::time_t date);
	auto get_Title() -> std::string;
	auto get_Singer() -> std::string;
	auto get_Date() -> std::time_t;
private:
	std::string _title;
	std::string _singer;
	std::time_t _date;




};