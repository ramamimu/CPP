#include <bits/stdc++.h>
using namespace std;

#define X 3
#define ll long long
#define BUGG(n) cout<<"masuk "<<n<<endl
#define PRINT(n) cout<<n


vector<vector<int>> init_state(X, vector<int> (X,0));
vector<vector<int>> final_state(X, vector<int> (X,0));
vector<vector<int>> current_state(X, vector<int> (X,0));
vector<vector<int>> track_node(X, vector<int> (X,0));
int r_s,c_s;
int cost=INT_MAX;

void init(){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            current_state[i][j]=init_state[i][j];
            track_node[i][j]=init_state[i][j];
        }
    }
}

int find_position(int num, int pos_r, int pos_y){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            if(final_state[i][j]==num){
                return abs(pos_r-i)+abs(pos_y-j);
            }
        }
    }
    return 0;
}

int heurisctic(vector<vector<int>> c_state, vector<vector<int>> f_state){
    int hf=0;
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            // yg dipertimbangkan yang salah kotak aja
            if(c_state[i][j] != f_state[i][j] && c_state[i][j] != 0 )
                hf+=find_position(c_state[i][j], i,j );
        }
    }
    return hf;
}

void print_node(){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            PRINT(track_node[i][j]<<" ");
        }
        PRINT(endl);
    }
        PRINT(endl);
}

void print_h_func(){
    int temp = heurisctic(init_state, final_state);
    PRINT("h function: "<<temp<<endl;);
}

void set_c_state(){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            current_state[i][j]=init_state[i][j];
        }
    }
}

void check(int row, int col){
    int res_cost =heurisctic(current_state, final_state);
    if(cost > res_cost){
        cost = res_cost;
        for(int i=0; i<X; i++){
            for(int j=0; j<X; j++)
                track_node[i][j]=current_state[i][j];
        }
        r_s=row, c_s=col;
    }
}

void shuffle(int row, int col, int state){
    int temp;
    set_c_state();
    // top
    if(state==0){
        temp = current_state[row][col];
        current_state[row][col]=current_state[row-1][col];
        current_state[row-1][col] = temp;
    }
    // bottom
    if(state==1){
        // BUGG("suffle 1");
        temp = current_state[row][col];
        current_state[row][col]=current_state[row+1][col];
        current_state[row+1][col] = temp;
    }
    // right
    if(state==2){
        temp = current_state[row][col];
        current_state[row][col]=current_state[row][col+1];
        current_state[row][col+1] = temp;
    }
    // left
    if(state==3){
        temp = current_state[row][col];
        current_state[row][col]=current_state[row][col-1];
        current_state[row][col-1] = temp;
    }
}

void update(){
    for(int i=0; i<X; i++){
        for(int j=0; j<X; j++)
            init_state[i][j]=track_node[i][j];
    }
}

void proceed(int r_state, int c_state){
            if(heurisctic(current_state, final_state)){
                int count_cost=INT_MAX;
                // atas
                if(r_state-1 >= 0){
                    shuffle(r_state, c_state,0);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    check(r_state-1, c_state);                    
                }
                // bawah
                if(r_state+1 < X){
                    shuffle(r_state, c_state,1);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    check(r_state+1, c_state);                    
                }
                // kanan
                if(c_state+1 < X){
                    shuffle(r_state, c_state,2);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    check(r_state, c_state+1);                    
               }
                // kiri
                if(c_state-1 >= 0){
                    shuffle(r_state, c_state,3);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    check(r_state, c_state-1);                    
                }
                
                update();
                print_h_func();
                print_node();
                proceed(r_s, c_s);
            }
}

int main(){
    init_state={
        {2,8,3},
        {1,6,4},
        {7,0,5}
    };
    r_s=2, c_s=1;

    final_state={
        {1,2,3},
        {8,0,4},
        {7,6,5}
    };

    init();
    print_h_func();
    print_node();
    proceed(r_s,c_s);
}