#include <gtest/gtest.h>

#include <AMR/Expression/ExpressionNode.hpp>

using namespace AMR;

TEST(ConstantNodeTest, evaluate)
{
	ConstantNode node = 3;

	EXPECT_EQ(node.evaluate(), 3);

	node = 4;
	EXPECT_EQ(node.evaluate(), 4);
}

TEST(AdditionNodeTest, evaluate)
{
	ConstantNode c_node_1 = 1;
	ConstantNode c_node_2 = 2;
	AdditionNode a_node_1 = AdditionNode(c_node_1, c_node_2);

	EXPECT_EQ(a_node_1.evaluate(), 3);

	// Nested addition nodes.
	AdditionNode a_node_2 = AdditionNode(a_node_1, c_node_2);
	EXPECT_EQ(a_node_2.evaluate(), 5);
}
