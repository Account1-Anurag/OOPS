#include <bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){
    int anurag[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>anurag[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(anurag[i][j]==1){
                cout<<abs(i-2)+abs(j-2);
            }
        
        }
    }
    return 0;
}