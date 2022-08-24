#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v{1,3,2,4};
	stack<int> s;
	vector<int> ans;
	for(int i=v.size()-1;i>=0;i--){
	    if(s.empty()){
	        ans.push_back(-1);
	    }
	    else if(s.top()<v[i]){
	        ans.push_back(s.top());
	    }
	    else{
	        while(!s.empty() and s.top()>=v[i]){
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
	reverse(ans.begin(),ans.end());
	for(int x:ans) {cout<<x<<" ";}
	return 0;
}

