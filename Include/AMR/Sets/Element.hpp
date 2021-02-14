#ifndef AMR_SETS_ELEMENT_HPP
#define AMR_SETS_ELEMENT_HPP

namespace AMR::Sets
{

	class Element
	{

	public:

		Element(float value);

		bool operator==(const float& y) const;
		bool operator==(const Element& y) const;

		float value;

	};

}

#endif