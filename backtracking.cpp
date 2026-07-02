#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// void printarr(int arr[], int n){
//     for (int i = 0; i<n; i++){
//         cout << arr[i] << " " << endl;
//     }
// }

// void backtrack(int arr[], int n, int i){
//     if(i == n){
//         printarr(arr,n);
//         return;
//     }

//     arr[i] = i+1;
//     backtrack(arr,n,i+1);
//     arr[i] -= 2;


// }

// int main(){
//     int arr[5] = {0};
//     int n = 5;
//     backtrack(arr,n,0);
//     printarr(arr,n);

//     return 0;
// }

//--------------print all subsets of string-------

// void printsubsets(string str, string subset){
//     int n = str.size();
//     if (n == 0){
//         cout << subset << "\n";
//         return;
//     }
//     char ch = str[0];

//     //char in string(yes)
//     printsubsets(str.substr(1,n-1),subset+ch);

//     //no
//     printsubsets(str.substr(1,n-1),subset);
// }

// int main(){
//     string str = "abc";
//     string subset = "";
//     printsubsets(str,subset);
//     return 0;
// }

// void permutations(string str, string permuted_str){
//     int n = str.size();
//     if (n == 0){
//         cout << permuted_str << "\n";
//         return;
//     }
//     for (int i=0; i<n; i++){
//         char curr = str[i];
//         string new_str = str.substr(0,i) + str.substr(i+1,n-i-1);
//         permutations(new_str,permuted_str+curr);  
//     }
// }

// int main(){
//     string str = "abc";
//     string permuted_str = "";
//     permutations(str,permuted_str);
//     return 0;
// }

//N-queens

// void printcheckboard(vector<vector<string>> chessboard){
//     int n = 4;
//     cout << "[";
//     for (int i=0; i<n; i++){
//         string row = "";
//         for (int j=0; j<n; j++){
//             row += chessboard[i][j];
//         }
//         cout << "\"" << row << "\"";
//         if (i != n-1){
//             cout << ",";
//         }

//     }
//     cout << "]";
// }

// bool issafe(vector<vector<char>> chessboard, int row, int col){
//     for (int j = 0; j<col; j++){
//         if(chessboard[row][j] == 'Q'){
//             return false;      
//         }
//     }

//     for (int i = 0; i<row; i++){
//         if (chessboard[i][col] == 'Q'){
//             return false;
//         }
//     }

//     for (int i = row,j = col; i>=0 && j<chessboard.size(); i--, j++){
//         if (chessboard[i][j] == 'Q'){
//             return false;
//         }
//     }
//     for (int i = row,j = col; i>=0 && j>=0; i--, j--){
//         if (chessboard[i][j] == 'Q'){
//             return false;
//         }
//     }
//     return true;
// }


// void queen_placements(vector<vector<char>> chessboard,int row){
//     if (row == chessboard.size()){
//         printcheckboard(chessboard);
//         return;
//     }
//     for (int j=0; j<chessboard.size(); j++){
//         if (issafe(chessboard,row,j)){
//             chessboard[row][j]  = 'Q';
//             queen_placements(chessboard,row+1);
//             chessboard[row][j]  = '.';
//         }
//     }
// }

// int main(){
//     vector<vector<string>> chessboard;
//     int n = 4; //rows
//     for(int i=0; i<n; i++){
//         vector<string> NewRow;
//         for (int j=0;j<n;j++){
//             NewRow.push_back(".");
//         }
//         chessboard.push_back(NewRow);
//     }
//     printcheckboard(chessboard);
//     // queen_placements(chessboard,0);
//     return 0;
// }


//----------------grid ways---------------------

// int grid_ways(int n, int m,int i, int j){
//     if (i == n-1 && j == m-1){
//         return 1;
//     }

//     if (i >= n || j >= m){
//         return 0;
//     }

//     int val1 = grid_ways(n,m,i,j+1);
//     int val2 = grid_ways(n,m,i+1,j);

//     return val1 + val2;
// }

// int main(){
//     cout << grid_ways(2,3,0,0);
//     return 0;
// }

//---------------sudoku solve----------

// void printSudoku(int sudoku[][9]){
//     for (int i=0; i<9; i++){
//         for (int j=0; j<9; j++){
//             cout << sudoku[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// bool issafe(int sudoku[][9],int row,int col,int dig){

//     for (int i=0; i<=8; i++){
//         if(sudoku[i][col] == dig){
//             return false;
//         }
//     }

//     for (int j=0; j<=8; j++){
//         if(sudoku[row][j] == dig){
//             return false;
//         }
//     }

//     int start_row = (row/3) * 3;
//     int start_col = (col/3) * 3;

//     for (int i = start_row; i< start_row+2; i++){
//         for (int j=start_col; j< start_col+2; j++){
//             if (sudoku[i][j] == dig){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool sudoku_solver(int sudoku[][9], int row, int col){
//     if (row == 9){
//         printSudoku(sudoku);
//         return true;
//     } 
//     int nextrow = row;
//     int nextcol = col + 1;
//     if (col == 8){
//         nextrow = row + 1;
//         nextcol = 0;
//     }     
//     if (sudoku[row][col] != 0){
//         return sudoku_solver(sudoku,nextrow,nextcol);
//     }
//     for (int dig = 1; dig<=9; dig++){
//         if (issafe(sudoku,row,col,dig + '0')){
//             sudoku[row][col] = dig + '0';
//             if (sudoku_solver(sudoku,nextrow,nextcol)){
//                 return true;
//             }else{
//                 sudoku[row][col] = '.';
//             }    
//         }
//     }
//     return false;
// }


// int main(){
//     int sudoku[9][9] = {{0,0,8,0,0,0,0,0,0},
//                         {4,9,0,1,5,7,0,0,2},
//                         {0,0,3,0,0,4,1,9,0},
//                         {1,8,5,0,6,0,0,2,0},
//                         {0,0,0,0,2,0,0,6,0},
//                         {9,6,0,4,0,5,3,0,0},
//                         {0,3,0,0,7,2,0,0,4},
//                         {0,4,9,0,3,0,0,5,7},
//                         {8,2,7,0,0,9,0,1,3}};
    
//     cout << sudoku_solver(sudoku,0,0);
//     return 0;               
// }

