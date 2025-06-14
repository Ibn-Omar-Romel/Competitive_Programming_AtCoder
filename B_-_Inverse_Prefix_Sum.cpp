#include<iostream>

using namespace std;

int main() {

    int N;

    cin>>N;
    int array[N];
    for(int i = 0 ; i < N ; i++) {

        cin>>array[i];
    }

    int value  = 0;
    int index = 0;

    for(int i = 0 ; i < N ; i++) {

        if(i == 0) {

            cout<<array[i]<<" ";
            index = array[i];
            

        }
        else {

            value = value + index;
            index = array[i]-value;
            cout<<index<<" ";
        }
            
    }
    cout<<'\n';

    
}