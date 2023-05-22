#include "vinyl.hpp"

auto Vinyl::isequal(Vinyl vinyl) -> bool
{
	return (vinyl.get_Singer() == this->get_Singer()) &&
		(vinyl.get_Date() == this->get_Date()) &&
		(vinyl.get_Title() == this->get_Title()) ;
}