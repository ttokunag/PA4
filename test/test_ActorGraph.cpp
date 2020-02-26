#include <gtest/gtest.h>
#include <iostream>
#include "ActorNode.hpp"

using namespace std;
using namespace testing;

// TODO: add tests for actor graph
TEST(ActorTest, ACTOR_NODE_TEST) {
    ActorNode actor1("a");
    ActorNode actor2("b");
    actor1.buildEdge("movie1", 2020, &actor2);

    ASSERT_EQ("a", actor1.getName());
    ASSERT_EQ("b", actor2.getName());
}