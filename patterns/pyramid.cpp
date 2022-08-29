// pryamid 

/* 

         *
        ***
       *****
      *******

*/


#include <iostream>
using namespace std;

int main() {
    int space = 10;
    for(int i=0;i<=4;i++){
        for(int k=0;k<space;k++){
            cout<<" ";
        }
        for(int j=0;j<i*2-1;j++){
            cout<<"*";
        }
        space--;
        cout<<endl;
    }
	return 0;
}