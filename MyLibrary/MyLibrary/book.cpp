#include "book.hpp"

auto Book::isequal(Book book) -> bool
{
	return (book.get_Author() == this ->get_Author()) &&
		(book.get_Date() == this -> get_Date()) &&
		(book.get_Title() == this -> get_Title());
}