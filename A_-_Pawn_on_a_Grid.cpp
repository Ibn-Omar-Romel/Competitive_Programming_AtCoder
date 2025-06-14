#include<iostream>
#include<string.h>

using namespace std;

int main() {

    int H, W, count = 0 ;
    cin>>H>>W;

    char arr[H][W];

    for(int i = 0 ; i < H ; i++) {

        for(int j = 0 ; j < W ; j++) {

            cin>>arr[i][j];

            if(arr[i][j] == '#')
                count++;
        }
    }
    cout<<count<<'\n';
}