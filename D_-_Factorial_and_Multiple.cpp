#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n;
    cin>>n;

    int count = 0 , value = 0, fact = 1,check = 2;

    while(value != fact) {

        fact = 1;
        value = 0;

        for(int i = 1; i <= check; ++i) {
            fact *= i;
        }
        for(int j = 1 ; value <= fact ; j++) {

            value = n*j;
            if(value == fact){
                cout<<j+1<<'\n';
                break;
            }
        }
        check++;
        
    }
}