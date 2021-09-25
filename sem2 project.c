#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define infinity 9999
#define MAX 20
//funtion prototype
void dijkstra(int G[MAX][MAX],int n,int start);
int main(){
 int Graph[MAX][MAX],i,j,n,u,p;
 n=13;
 //adjacency matrix for graph of city
 Graph[0][0] = 0;
 Graph[0][1] = 0;
 Graph[0][2] = 0;
 Graph[0][3] = 0;
 Graph[0][4] = 0;
 Graph[0][5] = 0;
 Graph[0][6] = 0;
 Graph[0][7] = 10;
 Graph[0][8] = 0;
 Graph[0][9] = 25;
 Graph[0][10] = 0;
 Graph[0][11] = 65;
 Graph[0][12] = 0;

 Graph[1][0] = 0;
 Graph[1][1] = 0;
 Graph[1][2] = 10;
 Graph[1][3] = 60;
 Graph[1][4] = 0;
 Graph[1][5] = 70;
 Graph[1][6] = 0;
 Graph[1][7] = 0;
 Graph[1][8] = 0;
 Graph[1][9] = 0;
 Graph[1][10] = 50;
 Graph[1][11] = 0;
 Graph[1][12] = 0;
 Graph[2][0] = 0;
 Graph[2][1] = 10;
 Graph[2][2] = 0;
 Graph[2][3] = 0;
 Graph[2][4] = 20;
 Graph[2][5] = 0;
 Graph[2][6] = 0;
 Graph[2][7] = 0;
 Graph[2][8] = 0;
 Graph[2][9] = 0;
 Graph[2][10] = 50;
 Graph[2][11] = 20;
 Graph[2][12] = 0;
 Graph[2][6] = 0;
 Graph[3][0] = 0;
 Graph[3][1] = 60;


 Graph[3][2] = 0;
 Graph[3][3] = 0;
 Graph[3][4] = 10;
 Graph[3][5] = 10;
 Graph[3][6] = 0;
 Graph[3][7] = 0;
 Graph[3][8] = 0;
 Graph[3][9] = 0;
 Graph[3][10] = 40;
 Graph[3][11] = 0;
 Graph[3][12] = 10;
 Graph[4][0] = 0;
 Graph[4][1] = 0;
 Graph[4][2] = 20;
 Graph[4][3] = 10;
 Graph[4][4] = 0;
 Graph[4][5] = 0;
 Graph[4][6] = 10;
 Graph[4][7] = 0;
 Graph[4][8] = 0;
 Graph[4][9] = 0;
 Graph[4][10] = 30;
 Graph[4][11] = 20;
 Graph[4][12] = 30;
 Graph[5][0] = 0;
 Graph[5][1] = 70;
 Graph[5][2] = 0;
 Graph[5][3] = 10;
 Graph[5][4] = 0;

 Graph[5][5] = 0;
 Graph[5][6] = 0;
 Graph[5][7] = 0;
 Graph[5][8] = 20;
 Graph[5][9] = 70;
 Graph[5][10] = 0;
 Graph[5][11] = 0;
 Graph[5][12] = 10;
 Graph[6][0] = 0;
 Graph[6][1] = 0;
 Graph[6][2] = 0;
 Graph[6][3] = 0;
 Graph[6][4] = 10;
 Graph[6][5] = 0;
 Graph[6][6] = 0;
 Graph[6][7] = 10;
 Graph[6][8] = 20;
 Graph[6][9] = 30;
 Graph[6][10] = 0;
 Graph[6][11] = 40;
 Graph[6][12] = 10;
 Graph[7][0] = 10;
 Graph[7][1] = 0;
 Graph[7][2] = 0;
 Graph[7][3] = 0;
 Graph[7][4] = 0;
 Graph[7][5] = 0;
 Graph[7][6] = 10;
 Graph[7][7] = 0;
 Graph[7][8] = 0;
 Graph[7][9] = 40;
 Graph[7][10] = 0;
 Graph[7][11] = 20;
 Graph[7][12] = 0;
 Graph[8][0] = 0;
 Graph[8][1] = 0;
 Graph[8][2] = 0;
 Graph[8][3] = 0;
 Graph[8][4] = 0;
 Graph[8][5] = 20;
 Graph[8][6] = 20;
 Graph[8][7] = 0;
 Graph[8][8] = 0;
 Graph[8][9] = 30;
 Graph[8][10] = 0;
 Graph[8][11] = 0;
 Graph[8][12] = 40;
 Graph[9][0] = 25;
 Graph[9][1] = 0;
 Graph[9][2] = 0;
 Graph[9][3] = 0;
 Graph[9][4] = 0;
 Graph[9][5] = 70;
 Graph[9][6] = 30;
 Graph[9][7] = 40;
 Graph[9][8] = 30;
 Graph[9][9] = 0;
 Graph[9][10] = 0;
 Graph[9][11] = 0;
 Graph[9][12] = 0;
 Graph[10][0] = 0;
 Graph[10][1] = 50;
 Graph[10][2] = 50;
 Graph[10][3] = 40;
 Graph[10][4] = 30;
 Graph[10][5] = 0;
 Graph[10][6] = 0;
 Graph[10][7] = 0;
 Graph[10][8] = 0;
 Graph[10][9] = 0;
 Graph[10][10] = 0;
 Graph[10][11] = 0;
 Graph[10][12] = 0;
 Graph[11][0] = 65;
 Graph[11][1] = 0;
 Graph[11][2] = 20;
 Graph[11][3] = 0;
 Graph[11][4] = 20;
 Graph[11][5] = 0;
 Graph[11][6] = 40;
 Graph[11][7] = 20;
 Graph[11][8] = 0;
 Graph[11][9] = 0;
 Graph[11][10] = 0;
 Graph[11][11] = 0;
 Graph[11][12] = 0;

 Graph[12][0] = 0;
 Graph[12][1] = 0;
 Graph[12][2] = 0;
 Graph[12][3] = 10;
 Graph[12][4] = 30;
 Graph[12][5] = 10;
 Graph[12][6] = 10;
 Graph[12][7] = 0;
 Graph[12][8] = 40;
 Graph[12][9] = 0;
 Graph[12][10] = 0;
 Graph[12][11] = 0;
 Graph[12][12] = 0;
 printf(" NEAREST POLICE STATION FINDER\n");
 printf("-------------------------------------------------------------------------\n");
 //code for menu
 while(1>0){
 printf("\nSelect Opertion\n1) search\n2) exit\n\n");
 scanf("%d",&p);
 if(p==1){
 printf("\nEnter House Number : ");
 scanf("%d",&u);
 printf("\nSearching Nearest Police Station And Shortest Path ToGiven Location.....\n");
 dijkstra(Graph,n,u);
 printf("\n");
 }
 else if(p==2){


 printf("\n JAI HIND! THANK YOU FOR USING THIS APPLICATION...");
 exit(0);
 }
 else{
 printf("\nInvalid input...\n");
 }
 }
 return 0;
}
void dijkstra(int G[MAX][MAX],int n,int start){
 int cost[MAX][MAX],dis[MAX],pred[MAX];
 int visited[MAX],count,mindis,next,i,j;
 //pred[] stores the predecessor of each node ,count gives the number of
//nodes seen so far
 //creating the cost matrix
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(G[i][j]==0)
 cost[i][j]=infinity;
 else
 cost[i][j]=G[i][j];
 //initialize pred[],distance[] and visited[]
 for(i=0;i<n;i++){
 dis[i]=cost[start][i];
 pred[i]=start;
 visited[i]=0;
 }

 dis[start]=0;
 visited[start]=1;
 count=1;
 while(count<n-1){
 mindis=infinity;
 //next node will give the node at minimum distance
 for(i=0;i<n;i++)
 if(dis[i]<mindis&&!visited[i]){
 mindis=dis[i];
 next=i;
 }
 //checking if a better path exists through next node
 visited[next]=1;
 for(i=0;i<n;i++)
 if(!visited[i])
 if(mindis+cost[next][i]<dis[i]){
 dis[i]=mindis+cost[next][i];
 pred[i]=next;
 }
 count++;
 }
 //printing the path and distance of each police station
 int minindex=10;
 for(i=10;i<n;i++){
 if(i!=start){
 printf("\nDistance of police station at plot number %d = %d metres",i,dis[i]);
 if(dis[minindex]>dis[i]){
 minindex=i;
 }


 printf("\nPath to police station = %d",i);
 j=i;
 do{
 j=pred[j];
 printf("<-%d",j);
 }while(j!=start);
 printf("\n");
 }
 }
 printf("\n-------------------------------------------------------------------------\n");
 printf("\nNearest police station is at plot number : %d",minindex);
 printf("\nDistance for nearest police station : %d metres",dis[minindex]);
 printf("\nPath of nearest police station : %d",minindex);
 j=minindex;
 do{
 j=pred[j];
 printf("<-%d",j);
 }while(j!=start);
 printf("\n\n-------------------------------------------------------------------------\n");
 }
