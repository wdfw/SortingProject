#include "sort.h"

node::node(int v, node* l, node* r){
    this->val = v ;
    this->left = l ;
    this->right = r ;
}

node* binaryTree::findPosition(int element){
    node* currentNode = this->root ;
    node* lastNode = NULL ;
    while(currentNode){
        lastNode = currentNode ;
	if(element > currentNode->val){
	    currentNode = currentNode->right ;
	}else{
	    currentNode = currentNode->left ;
	}
    } 
    return lastNode ;
}
void binaryTree::addElement(int element){
    node* insertNode = this->findPosition(element) ;
    if(element>insertNode->val) insertNode->right = new node(element) ;
    else insertNode->left = new node(element) ;
}
binaryTree::binaryTree(vector<int>nums){
    this->root = new node(nums[0]) ;
    for(int i=1; i<nums.size(); i++){
        this->addElement(nums[1]) ;
    }
}
void binaryTree::_dfsSort(node* currentNode, vector<int>& sortedNums){
    if(currentNode->left) this->_dfsSort(currentNode->left, sortedNums) ;
    sortedNums.push_back(currentNode->val) ;
    if(currentNode->right) this->_dfsSort(currentNode->right, sortedNums) ;
}
vector<int> binaryTree::sort(void){
    vector<int> sortedNums ;
    this->_dfsSort(this->root, sortedNums) ;
    return sortedNums ;
}
