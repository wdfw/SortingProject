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
    public :
        node* root ;
        binaryTree(vector<int>nums) ;
        vector<int> sort(bool reverse) ;	
	node* findPosition(int element) ;
	void addElement(int element) ;
} ;

