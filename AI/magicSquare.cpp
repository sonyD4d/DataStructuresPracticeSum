#include <iostream>
#include <stdlib.h> 
#include <set>

using namespace std;

//initlize board and magic square parameters 
int board[9]={0};
set<int> notOccupied;
int defBoardValue[9]={8,3,4,1,5,9,6,7,2};

//to get random
int getRandom(){
    auto r = rand()%notOccupied.size(); 
    auto it = notOccupied.begin();
    while(r--) it++;
    return *it;
}

//to display board 
void showBoard(){
    cout<<"Board: "<<endl;
    size_t i=1;
    for(;i<=9;i+=3){
        cout<<" ("<<i<<")"<<"-> "<<board[i-1]<<\
              " ("<<i+1<<")"<<"-> "<<board[i]<<\
              " ("<<i+2<<")"<<"-> "<<board[i+1];
        cout<<"\n";
    }
}

//to assign a move
void setMove(int move,int val){
    if(notOccupied.find(move)!=notOccupied.end()){
        board[move-1]=val;
        notOccupied.erase(move);
    }else{
        cout<<"INVALID MOVE";
        exit(0);
    }
}

/**
 * to check or get winning position
 * val:player
 * cond : 0   -> to get winning block
 *        val -> to check winning posn of val  
 */
int getWinPos(int val,int cond){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int k = 0; k < 9; k++){
                if (i != j && i != k && j != k){
                    if(board[i]==val&&board[j]==val&&board[k]==cond){
                        if((defBoardValue[i]+defBoardValue[j]+defBoardValue[k])==15){
                            return (k);
                        }
                    }
                }
            }
        }
    }
    return -1;
}

//to check if player wins or not
void checkPlayerWin(){
    if(getWinPos(1,1)>0){
        showBoard();
        cout<<"Player won";
        exit(0);
    }
}

//bot's move
void botAssign(){
    int move=getWinPos(1,0);
    if(move==-1){
        setMove(getRandom(),2);
    }else{
        setMove(move+1,2);
    }
    showBoard();
}

//to check if bots wins or not; if not then assign next value
void checkBotWin(){
    int move=getWinPos(2,0);
    //if bot can win
    if(move>=0){
        setMove(move+1,2);
        cout<<"Bot won"<<endl;
        showBoard();
        exit(0);
    }else{
        botAssign();
    }
}

//input human move
void getHumanMove(){
    int move;
    cout<<"Enter your move :";
    cin>>move;
    setMove(move,1);
}

int main(){

    //initilize board not occupied set
    for( int i = 1; i != 10; ++i ) notOccupied.insert(i);
    srand(time(0));

    showBoard();
    //1st move : human
    getHumanMove();
    //2nd move : Bot
    setMove(getRandom(),2);
    showBoard();
    //3rd move : human
    getHumanMove();
    //4th move : Bot
    botAssign();
    //5th - 8th move
    for(int i=0;i!=2;i++){ 
        //human
        getHumanMove();
        checkPlayerWin();
        //Bot 
        checkBotWin();
    }
    //9th move : human
    getHumanMove();
    checkPlayerWin();
    cout<<"Draw"<<endl;
    showBoard();
}