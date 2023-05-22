#include "blueray.hpp"

auto BlueRay::isequal(BlueRay blueray)-> bool
{
	return (blueray.get_Director() == this->get_Director()) &&
		(blueray.get_Date() == this->get_Date()) &&
		(blueray.get_Title() == this->get_Title());
}
