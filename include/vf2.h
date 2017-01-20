#ifndef _SORT_HPP_
#define _SORT_HPP_

#include <list>
#include <vector>

class Node{


	private:
	int node_id;
	std::list<int> neighboringNodes;
	public:
	void setId(int id);
	void addNode(int nodeId);
	int getId();
	std::list<int> getNeighboringNodes();
	void setNeighboringNodes(int* nodes,int noOfElements);
	};

void Node::setId(int id){
	this->node_id = id;
}


void Node::addNode(int id){
	this->neighboringNodes.push_back(id);
}

void Node::setNeighboringNodes(int* nodes,int noOfElements){
	this->neighboringNodes.insert(neighboringNodes.begin(),nodes,nodes+noOfElements);
}

int Node::getId(){
	return node_id;
}

std::list<int> Node::getNeighboringNodes(){
	return neighboringNodes;
}

class Match{

public:
	int base[8]={-1,-1,-1,-1,-1,-1,-1,-1};
	int tree[8]={-1,-1,-1,-1,-1,-1,-1,-1};
	bool isComplete(); 	
};

bool Match::isComplete(){
	if(tree[8]!=-1)
		return true;
	return false;
}


#endif
