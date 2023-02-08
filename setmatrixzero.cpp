#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        bool r=false;  
        bool c=false;  
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
					if(a[i][j] == 0){   
                    if(i==0) r=true;
                    if(j==0) c=true;
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][0]==0||a[0][j]==0){
                    a[i][j]=0;
                }
            }
        }
        if(r){
            for(int i=0;i<m;i++) a[0][i] = 0;
        }
        if(c){
            for(int i=0;i<n;i++) a[i][0] = 0;
        } 
    }
};

