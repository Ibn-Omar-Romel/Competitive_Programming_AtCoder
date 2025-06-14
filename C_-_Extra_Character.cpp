#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string S,T;
    cin>>S>>T;

    int value = 0 , position = 0;

    if(S.size()>= T.size())
        value = S.size();
    else
        value = T.size();

    for(int i = 0 ; i < value ; i++) {

        if(S[i] != T[i]){

            position = i + 1;
            break;
        }
            
    }
    cout<<position<<'\n';
}