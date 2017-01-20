#include <iostream>
#include <cmath>
#include <vector>
#include "../include/vf2.h"
using namespace std;


void match_tree(Match match, const std::vector<Node> &tree , const std::vector<Node> &base , int level){

	if(match.isComplete)
		return;
	


	

	
	
		

}



int main(){

std::vector<Node> tNodes;
std::vector<Node> bNodes;
int base_graph[8] = {1,2,3,4,5,6,7,8};
int tree_graph[8] = {1,2,3,4,5,6,7,8};


Node node_1;
node_1.setId(1);
int array_1[3] = {2,3,4};
node_1.setNeighboringNodes(array_1,3);
Node node_2;
node_2.setId(2);
int array_2[3]={1,3,4};
node_2.setNeighboringNodes(array_2,3);
int array_3[5]={1,2,4,5,6};
Node node_3;
node_3.setId(3);
node_3.setNeighboringNodes(array_3,5);
Node node_4;
int array_4[5]={1,2,3,5,6};
node_4.setId(4);
node_4.setNeighboringNodes(array_4,5);
Node node_5;
int array_5[5]={3,4,6,7,8};
node_5.setId(5);
node_5.setNeighboringNodes(array_5,5);
Node node_6;
int array_6[5]={3,4,6,7,8};
node_6.setId(6);
node_6.setNeighboringNodes(array_6,5);
Node node_7;
int array_7[3]={5,6,8};
node_7.setId(7);
node_7.setNeighboringNodes(array_7,3);
Node node_8;
int array_8[3]={5,6,7};
node_8.setId(8);
node_8.setNeighboringNodes(array_8,3);

//base_node_graph[8]={node_1,node_2,node_3,node_4,node_5,node_6,node_7,node_8};
int tArray_1[2]={2,3};
int tArray_2[1]={1};
int tArray_3[3]={1,4,6};
int tArray_4[2]={3,5};
int tArray_5[1]={4};
int tArray_6[2]={3,7};
int tArray_7[2]={6,8};
int tArray_8[1]={7};

Node tNode_1;
Node tNode_2;
Node tNode_3;
Node tNode_4;
Node tNode_5;
Node tNode_6;
Node tNode_7;
Node tNode_8;


tNode_1.setId(1);
tNode_2.setId(2);
tNode_3.setId(3);
tNode_4.setId(4);
tNode_5.setId(5);
tNode_6.setId(6);
tNode_7.setId(7);
tNode_8.setId(8);

tNode_1.setNeighboringNodes(tArray_1,2);
tNode_2.setNeighboringNodes(tArray_2,1);
tNode_3.setNeighboringNodes(tArray_3,3);
tNode_4.setNeighboringNodes(tArray_4,2);
tNode_5.setNeighboringNodes(tArray_5,1);
tNode_6.setNeighboringNodes(tArray_6,2);
tNode_7.setNeighboringNodes(tArray_7,2);
tNode_8.setNeighboringNodes(tArray_8,1);

tNodes.push_back(tNode_1);
tNodes.push_back(tNode_2);
tNodes.push_back(tNode_3);
tNodes.push_back(tNode_4);
tNodes.push_back(tNode_5);
tNodes.push_back(tNode_6);
tNodes.push_back(tNode_7);
tNodes.push_back(tNode_8);

bNodes.push_back(node_1);
bNodes.push_back(node_2);
bNodes.push_back(node_3);
bNodes.push_back(node_4);
bNodes.push_back(node_5);
bNodes.push_back(node_6);
bNodes.push_back(node_7);
bNodes.push_back(node_8);


//tree_node_graph[8] = {tNode_1,tNode_2,tNode_3,tNode_4,tNode_5,tNode_6,tNode_7,tNode_8};

for(int i = 0; i < 8 ; i++){
	Match match;
	match.tree[1]=1;
	match.base[1]=i;
	match_tree(match,tNodes,bNodes,1);
}
//match_tree(base_graph,tree_graph);

}
