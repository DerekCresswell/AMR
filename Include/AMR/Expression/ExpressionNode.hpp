#ifndef AMR_EXPRESSION_EXPRESSIONNODE_H
#define AMR_EXPRESSION_EXPRESSIONNODE_H

#include <map>

namespace AMR
{

	namespace {
		static std::map<char, int> empty_map = {};
	}

	class ExpressionNode
	{
	public:
		virtual int evaluate(const std::map<char, int>& variables = empty_map) = 0;
	};

	class ConstantNode : public ExpressionNode
	{
	public:
		ConstantNode(int value);
		int evaluate(const std::map<char, int>& variables = empty_map) override;
	private:
		int value;
	};

	class AdditionNode : public ExpressionNode
	{
	public:
		AdditionNode(ExpressionNode& l_node, ExpressionNode& r_node);
		int evaluate(const std::map<char, int>& variables = empty_map) override;
	private:
		ExpressionNode& l_node;
		ExpressionNode& r_node;
	};

}

#endif
