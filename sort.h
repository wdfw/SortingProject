#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std ;

class node{
    public :
        int val ;
	node* left ;
	node* right ;
        node(int v=0, node* l=NULL, node* r=NULL) ;
} ;

class binaryTree{
    private :
	void _dfsSort(node* currentNode, vector<int>& sortedNums) ;
    public :
        node* root ;
        binaryTree(vector<int>nums) ;
        vector<int> sort(void) ;	
	node* findPosition(int element) ;
	void addElement(int element) ;
} ;

