#include <iostream>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int arr[4][4], int visited[4][4]){
    if((x>=0 && x<4) && (y>=0 && y<4) && visited[x][y] == 0 && arr[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(int x, int y, string path, int visited[4][4], int arr[4][4]){
        if(x == 3 && y == 3){
            cout<<path<<" ";
            return;
        }

        visited[x][y] = 1;

        // 4 choices : D,R,L,U

        // down

        int newx = x+1;
        int newy = y;

        if(isSafe(newx, newy, arr,visited)){
            path.push_back('D');
            solve(newx, newy,path,visited,arr);
            path.pop_back();
        }
        // right

        newx = x;
        newy = y+1;

        if(isSafe(newx, newy, arr,visited)){
            path.push_back('R');
            solve(newx, newy,path,visited,arr);
            path.pop_back();
        }
        // left

        newx = x;
        newy = y-1;

        if(isSafe(newx, newy, arr,visited)){
            path.push_back('L');
            solve(newx, newy,path,visited,arr);
            path.pop_back();
        }
        // up

        newx = x-1;
        newy = y;

        if(isSafe(newx, newy, arr,visited)){
            path.push_back('U');
            solve(newx, newy,path,visited,arr);
            path.pop_back();
        }
        
        
        visited[x][y] = 0;
}

int main(){

    int arr[4][4] = {{1,0,0,0},
                     {1,1,0,1},
                     {1,1,0,0},
                     {0,1,1,1}};

    string path =  "";

    if(arr[0][0] == 0){
        cout<<path;
        return 0;
    }

    int srcx = 0;
    int srcy = 0;
    int visited[4][4] = {0};

    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j<4; j++){
    //         visited[i][j] = 0;
    //     }
    // }

    solve(srcx,srcy,path,visited,arr);


}