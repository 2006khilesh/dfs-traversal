#include <iostream>
using namespace std;

#define max 20

int n;
int adj[max][max];
int visited[max];

void DFS(int node){
cout<<char('A' + node) << "\t";
visited [node] = 1;

for (int i=0; i<n; i++) {
    if (adj[node][i] == 1&& visited[i] == 0){
        DFS(i);
        }
    }
}

int main(){
int i,j;
char startChar;
int start;

cout<<"Enter no of nodes:";
cin>>n;

cout<<"Enter adjacency matrix:\n";
for(i=0; i<n;i++) {
for(j=0; j<n;j++)
        {
            cin>>adj [i] [j] ;
        }
        }
        cout<<"Enter starting node";
        cin>>startChar;
        start=startChar-'A';
        for (int i=0; i<n;i++){
            visited[i]=0;
        }
        cout << "\nDFS Traversal:\n";
        DFS(start);

        return 0;
}
