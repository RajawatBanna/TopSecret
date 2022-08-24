#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v{5,6,4,7,3,5};
	stack<int> s;
	vector<int> ans;
	for(int i=0;i<v.size();i++){
	    if(s.empty()){
	        ans.push_back(-1);
	    }
	    else if(s.top()>v[i]){
	        ans.push_back(s.top());
	    }
	    else{
	        while(!s.empty() and s.top()<=v[i]){
	            s.pop();
	        }
	        if(s.empty()){
    	        ans.push_back(-1);
    	    }
    	    else{
    	        ans.push_back(s.top());
    	    }
	    }
	    s.push(v[i]);
	}
	for(int x:ans) {cout<<x<<" ";}
	return 0;
}

