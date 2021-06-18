#include <AMR/Expression/ExpressionNode.hpp>

namespace AMR
{

	ConstantNode::ConstantNode(int value)
		: value(value)
	{}

	int ConstantNode::evaluate(const std::map<char, int>& variables)
	{
		return value;
	}

	AdditionNode::AdditionNode(ExpressionNode& l_node, ExpressionNode& r_node)
		: l_node(l_node), r_node(r_node)
	{}

	int AdditionNode::evaluate(const std::map<char, int>& variables)
	{
		return l_node.evaluate(variables) + r_node.evaluate(variables);
	}

}
