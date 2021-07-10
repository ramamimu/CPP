#include <bits/stdc++.h>

using namespace std;

#define CHECK(n) cout<<"masuk "<<n<<endl;

typedef struct nOdE
{
    nOdE *parent=NULL;
    int numb;
    int level;
}NODE;

NODE* newNode(int start, NODE* parent, int level)
{    
    NODE *node = new NODE;
    node->parent = parent;
    node->numb = start;
    node->level = level;
    // if(parent!=NULL)
    // {
    //     node->numb = parent->numb;
    // }
    // node->numb.push_back(start);
    return node;
}

void recursPath(NODE *node)
{
    // NODE *temp=node;
    if(!node->parent)
    {
        cout<<node->numb<<" ";    
        return;
    }
    recursPath(node->parent);
    // CHECK(10);
    cout<<node->numb<<" ";
}

void printPath(NODE *node)
{
    cout<< "YES\n"<<node->level<<endl;
    recursPath(node);
    cout<<endl;
        // << numb.size() << endl;
    // for(int i=0; i<numb.size(); i++)
    // {
    //     cout<<numb[i]<<" ";
    // }
    // cout<<endl;
}

bool ever=false;
void process(NODE *node, int path, int finish, int level)
{
    // CHECK(999);
    if(node!=NULL && node->numb >= finish)
    {
        // CHECK(222);
        if(node->numb == finish)
        {
            // cout<<"YEE\n";
            // CHECK(path);
            ever=true;
            printPath(node);
            exit(0);
        }
    }
    else
    {
        // CHECK(123);
        NODE *recentNode = newNode(path, node, level);
        process( recentNode, path*2, finish, level+1);
        process( recentNode, path*10+1, finish, level+1);
    }
}

void recursion(int start, int finish)
{
    // CHECK(1);
    process(NULL, start, finish, 1);
}

int main()
{
    int start, finish;
    cin >> start
        >> finish;
    recursion(start, finish);
    if(!ever)
    {
        cout<<"NO\n";
    }
    return 0;
}