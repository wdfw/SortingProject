#include "sort.h"

void showVector(vector<int> v){
    for(auto &it : v) cout << it << " " ;
    cout << "\n" ;
}

vector<int> lineToVector(string str){
    vector<int> nums ;
    int begin = 0 ;
    for(int i=0; i<str.size()+1; i++){
    	if(i>=str.size() || str[i] == ' '){
	    if(begin != i-1){
	        nums.push_back(stoi(str.substr(begin, i))) ;
	    }
	    begin = i ;
	}
    }
    return nums ;
}

int main(int argc, char** argv){
    ifstream listFile ;
    listFile.open("testing.txt") ;
    string line ;
    vector<int> nums ;
    while(getline(listFile, line)){
        nums = lineToVector(line) ;
	binaryTree t(nums) ;

	showVector(t.sort()) ;
    }
    listFile.close() ;
    return 0 ;
}
