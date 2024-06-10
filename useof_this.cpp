#include <bits/stdc++.h>
using namespace std;
class RJIT{
    string branch_name;
    int ranking;
    public:
    void RJIT_ranking(string branch_name,int ranking){
        this->branch_name=branch_name;
        this->ranking=ranking;
        
    } 
    void print(){
        cout<<"branch_name : "<<branch_name<<endl;
        cout<<"ranking : "<<ranking<<endl;
    }
};
int main(){
    RJIT cse;
    cse.RJIT_ranking("COMPUTER SCIENCE",1);
    cse.print();
    
    return 0;
}