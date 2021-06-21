#include <AMR/Expression/CommonExpressionNodes.hpp>

namespace AMR
{

	ConstantNode::ConstantNode(int value)
		: value(value)
	{}

	int ConstantNode::evaluate(const std::map<char, int>& variables)
	{
		return value;
	}

	std::string ConstantNode::toString()
	{
		return std::to_string(value);
	}

	VariableNode::VariableNode(char identifier)
		: identifier(identifier)
	{}

	int VariableNode::evaluate(const std::map<char, int>& variables)
	{
		return variables.at(identifier);
	}

	std::string VariableNode::toString()
	{
		return std::string(1, identifier);
	}

	BinaryNode::BinaryNode(ExpressionNode& l_node, ExpressionNode& r_node)
		: l_node(l_node), r_node(r_node)
	{}

	int BinaryNode::evaluate(const std::map<char, int>& variables)
	{
		return operation(l_node.evaluate(variables), r_node.evaluate(variables));
	}

}
