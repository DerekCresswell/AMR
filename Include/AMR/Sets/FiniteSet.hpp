#ifndef AMR_SETS_FINITESET_HPP
#define AMR_SETS_FINITESET_HPP

#include <vector>

#include <AMR/Sets/Set.hpp>

namespace AMR::Sets
{

	class FiniteSet : public Set
	{

	public:

		FiniteSet(const std::vector<Element>& elements);

	public:

		// Member Variables.

		// Methods.
		bool in(Element x) const;

	protected:

		// Member Variables.
		std::vector<Element> elements;

	private:

	};

}

#endif