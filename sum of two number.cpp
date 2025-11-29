#include <iostream>
using namespace std;

int main(){
    int array[]={7,5,3,6,2};
    int target=11;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(array[i]+array[j]==target){
                cout<<"target achieved "<<i<<"+"<<j<<" ="<<" "<<target<<endl;
            }
        }
    }
    return 0;
}
