
#include <AMR\Sets\FiniteSet.hpp>

namespace AMR::Sets
{

	FiniteSet::FiniteSet(const std::vector<Element>& elements)
		: elements(elements)
	{
	}

	bool FiniteSet::in(Element x) const
	{

		return std::find(this->elements.begin(), this->elements.end(), x) != this->elements.end();
	}

}
