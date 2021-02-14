#ifndef AMR_SETS_SET_HPP
#define AMR_SETS_SET_HPP

#include <AMR/Sets/Element.hpp>

namespace AMR::Sets
{

	// A standard set already exists, would it be effective for these purposes?
	class Set
	{

	public:

		// Member Variables.

		// Methods.
		virtual bool in(Element x) const = 0;

	protected:

	private:

	};

}

#endif