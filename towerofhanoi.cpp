
#include <iostream>
using namespace std;
void towerofhanoi(int n,string source, string aux, string dest){
    
if(n==1){
     cout<<"Move ring from "<<source<<" to "<<dest<<endl;
     return;
}
towerofhanoi(n-1,source,dest,aux);
cout<<"Move from "<<source<<" to "<<dest<<endl;
towerofhanoi(n-1,aux,source,dest);
}
int main(){
int n=3;
string source="A";
string aux="B";
string dest="C";
towerofhanoi(n,source, aux,dest);
return 0;
}
