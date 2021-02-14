
#include <AMR/Sets/Element.hpp>

namespace AMR::Sets
{

	Element::Element(float value)
		: value(value)
	{
	}

	bool Element::operator==(const float& y) const
	{
		return this.value == y;
	}

	bool Element::operator==(const Element& y) const
	{
		return this.value == y.value;
	}

}