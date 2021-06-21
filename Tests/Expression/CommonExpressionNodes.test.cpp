#include <gtest/gtest.h>

#include <AMR/Expression/CommonExpressionNodes.hpp>

TEST(ConstantNodeTest, evaluate)
{
	AMR::ConstantNode node = 3;

	EXPECT_EQ(node.evaluate(), 3);

	node = 4;
	EXPECT_EQ(node.evaluate(), 4);
}

TEST(ConstantNodeTest, toString)
{
	AMR::ConstantNode node = 3;

	EXPECT_STREQ(node.toString().c_str(), "3");
}

TEST(VariableNodeTest, evaluate)
{
	AMR::VariableNode node = 'x';

	EXPECT_EQ(node.evaluate({{'x', 3}}), 3);
	EXPECT_EQ(node.evaluate({{'x', 4}}), 4);
}

TEST(VariableNodeTest, toString)
{
	AMR::VariableNode node = 'x';

	EXPECT_STREQ(node.toString().c_str(), "x");
}
