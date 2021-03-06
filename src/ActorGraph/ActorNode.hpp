#ifndef ACTORNODE_HPP
#define ACTORNODE_HPP

#include <string>
#include <unordered_map>
#include <vector>
#include "MovieEdge.hpp"

using namespace std;

class ActorNode {
  private:
    string name;

  public:
    unordered_map<string, MovieEdge> neighbors;
    ActorNode* prevNode;
    int distanceFromRoot;

    ActorNode(string name)
        : name(name), neighbors(), distanceFromRoot(-1), prevNode(nullptr){};

    void buildEdge(string movieName, int movieYear, ActorNode* actor);

    string getName();

    ~ActorNode();
};

#endif