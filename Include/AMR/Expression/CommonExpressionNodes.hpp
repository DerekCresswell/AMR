#ifndef AMR_EXPRESSION_COMMONEXPRESSIONNODES_H
#define AMR_EXPRESSION_COMMONEXPRESSIONNODES_H

#include <string>

#include <AMR/Expression/ExpressionNode.hpp>

namespace AMR
{

	/**
	 * Represents a given value.
	 */
	class ConstantNode : public ExpressionNode
	{
	public:
		ConstantNode(int value);
		int evaluate(const std::map<char, int>& variables = {}) override;
		std::string toString();

	private:
		int value;
	};

	/**
	 * Represents a placeholder value.
	 */
	class VariableNode : public ExpressionNode
	{
	public:
		VariableNode(char identifier);
		int evaluate(const std::map<char, int>& variables = {});
		std::string toString();

	private:
		char identifier;
	};

	/**
	 * Represents a node built from two other nodes conjoined by an operator.
	 */
	class BinaryNode : public ExpressionNode
	{
	public:
		BinaryNode(ExpressionNode& l_node, ExpressionNode& r_node);
		int evaluate(const std::map<char, int>& variables = {});

	protected:
		ExpressionNode& l_node;
		ExpressionNode& r_node;

		/**
		 * The operation this node performs given the values of it's two child nodes.
		 */
		virtual int operation(int l_value, int r_value) = 0;
	};

}

#endif
