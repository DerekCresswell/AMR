#ifndef AMR_EXPRESSION_EXPRESSIONNODE_H
#define AMR_EXPRESSION_EXPRESSIONNODE_H

#include <map>

namespace AMR
{

	/**
	 * Represents an abstract node in an expression tree.
	 */
	class ExpressionNode
	{
	public:

		/**
		 * Returns the value of this node given the a set of variables.
		 */
		virtual int evaluate(const std::map<char, int>& variables = {}) = 0;

		/**
		 * Returns a string representation of this node.
		 */
		virtual std::string toString() = 0;
	};

}

#endif
