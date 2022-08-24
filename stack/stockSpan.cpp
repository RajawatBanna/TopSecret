#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v{100,80,60,70,60,75,85};
	stack<pair<int,int>> s;
	vector<int> ans;
	for(int i=0;i<v.size();i++){
	    if(s.empty()){
	        ans.push_back(-1);
	    }
	    else if(s.top().first>v[i]){
	        ans.push_back(s.top().second);
	    }
	    else{
	        while(!s.empty() and s.top().first<=v[i]){
	            s.pop();
	        }
	        if(s.empty()){
    	        ans.push_back(-1);
    	    }
    	    else{
    	        ans.push_back(s.top().second);
    	    }
	    }
	    s.push({v[i],i});
	}
	for(int i=0;i<ans.size();i++) {cout<<i-ans[i]<<" ";}
	return 0;
}

