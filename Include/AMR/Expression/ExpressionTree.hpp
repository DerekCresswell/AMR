#ifndef AMR_EXPRESSION_EXPRESSIONTREE_H
#define AMR_EXPRESSION_EXPRESSIONTREE_H

#include <AMR/Expression/ExpressionNode.hpp>

namespace AMR
{

	class ExpressionTree
	{
	public:

		ExpressionTree();

	protected:

		ExpressionNode& root;

	};

}

#endif
