#include <bits/stdc++.h>
#define X 3
// #define int uint16_t
#define ll long long
#define BUGG(n) cout<<"masuk "<<n<<endl
#define PRINT(n) cout<<n

using namespace std;

vector<vector<int>> init_state(X, vector<int> (X,0));
vector<vector<int>> final_state(X, vector<int> (X,0));
vector<vector<int>> current_state(X, vector<int> (X,0));
int track_node[3][3];

ll cost;

int heurisctic(vector<vector<int>> c_state, vector<vector<int>> f_state){
    int hf=0;
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            // yg dipertimbangkan yang salah kotak aja
            if(c_state[i][j] != f_state[i][j] && c_state[i][j] != 0 )
                hf++;
        }
    }
    return hf;
}

int real_cost(vector<vector<int>> c_state, vector<vector<int>> f_state){
    int hf=0;
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            if(c_state[i][j]!=f_state[i][j])
                hf++;
        }
    }
    return hf;
}

void print_c_state(){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            PRINT(current_state[i][j]<<" ");
        }
        PRINT(endl);
    }
}

void print_h_func(){
    int temp = heurisctic(current_state, final_state);
    PRINT("h function: "<<temp<<endl;);
}

void print_r_cost(){
    int temp = real_cost(current_state, final_state);
    PRINT("real cost: "<<temp<<endl;);
}

void set_c_state(){
    for(int i=0; i<X;i++){
        for(int j=0;j<X;j++){
            current_state[i][j]=init_state[i][j];
        }
    }
}

// state t b r l = 0 1 2 3
void shuffle(int row, int col, int state){
    int temp;
    set_c_state();
    // top
    if(state==0){
        temp = current_state[row][col];
        current_state[row][col]=current_state[row-1][col];
        current_state[row-1][col] = temp;
        // BUGG("suffle 0");
        // print_c_state();
        // BUGG("AFTER SHUFFEL 0");
    }
    if(state==1){
        // BUGG("suffle 1");
        temp = current_state[row][col];
        current_state[row][col]=current_state[row+1][col];
        current_state[row+1][col] = temp;
        // print_c_state();
        // BUGG("AFTER SHUFFEL 1");
    }
    if(state==2){
        // BUGG("suffle 2");
        temp = current_state[row][col];
        current_state[row][col]=current_state[row][col+1];
        current_state[row][col+1] = temp;
        // print_c_state();
        // BUGG("AFTER SHUFFEL 2");
    }
    if(state==3){
        // BUGG("suffle 3");
        temp = current_state[row][col];
        current_state[row][col]=current_state[row][col-1];
        current_state[row][col-1] = temp;
        // print_c_state();
        // BUGG("AFTER SHUFFEL 3");
    }
}

void proceed(int r_state, int c_state){
    // for(int i=0; i<X; i++){
    //     for(int j=0; j<X; j++){
    //         if(init_state[i][j] != 0){
                int count_cost=INT_MAX;
                // atas
                if(r_state-1 >= 0){
                    BUGG("ATAS");
                    shuffle(r_state, c_state,0);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    print_h_func();
                    print_r_cost();
                    print_c_state();
                }
                // bawah
                if(r_state+1 < X){
                    BUGG("BAWAH");
                    shuffle(r_state, c_state,1);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    print_h_func();
                    print_r_cost();
                    print_c_state();
                }
                // kanan
                if(c_state+1 < X){
                    BUGG("KANAN");
                    shuffle(r_state, c_state,2);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    print_h_func();
                    print_r_cost();
                    print_c_state();
                }
                // kiri
                if(c_state-1 >= 0){
                    BUGG("KIRI");                    
                    shuffle(r_state, c_state,3);
                    count_cost=min(heurisctic(current_state, final_state), count_cost);
                    print_h_func();
                    print_r_cost();
                    print_c_state();
                }
                
                (count_cost!=UINT16_MAX)?cost += count_cost:count_cost=count_cost;
                // print_h_func();
                // print_c_state();
            // }
        // }
    // }
}

int main(){
    int r_s,c_s;
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

    int h_function = heurisctic(init_state, final_state);
    // cout<<h_function<<endl;
    // print_h_func();
    // print_c_state();
    proceed(r_s,c_s);
    // for(int i=0; i<X; i++){
    //     for (int j = 0; j < X; j++)
    //     {
    //         cout<<final_state[i][j];
    //     }
    //     cout<<endl;
    // }

    // track_node.push_back(3);
    // track_node.push_back(4);
    // track_node.push_back(6);
    // for (auto &i : track_node){
    //     cout<<i<<endl;
    // }
}