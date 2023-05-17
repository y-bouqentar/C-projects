
#include <iostream>
#include "book.hpp"
#include <string>




auto Book::get_Title() -> std::string {
		
	return _title;

};
auto Book::get_Author() -> std::string {

	return _Author;

};
auto Book::get_Date() -> std::time_t {

	return _releaseDate;

};