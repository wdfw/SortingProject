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
void _mergeSort(vector<int>& nums, vector<int>& lnums, vector<int>& rnums){
    if(l==r-1) return ;
    vector<int> tmp(r-l) ;


}
vecotr<int> mergeSort(vector<int>& nums){
    vector<int> sortedNums = nums ;
    _mergeSort(sortedNums, 0, nums.size()) ;
    return _mergeSort ;
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
