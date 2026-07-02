#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
using namespace std;

//----------max activites that can be done by a person------

// int maxActivities(vector<int> start, vector<int> end){
//     int count = 1;
//     int currEndtime = end[0];

//     for (int i=0; i<start.size(); i++){
//         if (start[i] >= currEndtime){
//             count++;
//             currEndtime = end[i];
//         }
//     }
//     return count;
// }

// int main(){
//     vector<int> start = {1,3,0,5,8,5};
//     vector<int> end = {2,4,6,7,9,9};
//     cout << maxActivities(start,end) << endl;
//     return 0;
// }

// bool compare(pair<int,int> p1, pair<int,int> p2){
//     return p1.second < p2.second; //asc order for desc order ue >
// } // for start base sorting use .first

// int main(){
//     vector<int> start = {0,1,2};
//     vector<int> end = {9,2,4};

//     vector<int> vec(5,0);
//     vector<pair<int,int>> act(3,make_pair(0,0));
//     act[0] = make_pair(0,9);
//     act[1] = make_pair(1,2);
//     act[2] = make_pair(2,4);

//     for (int i=0; i<act.size(); i++){
//         cout << act[i].first << "," << act[i].second << endl;
//     }
//     sort(act.begin(), act.end(),compare);


//     //sorted activities based on end time
//     for (int i=0; i<act.size(); i++){
//         cout << act[i].first << "," << act[i].second << endl;
//     }

//     return 0;
// }

//-----------fractional knapsack problem-----------

// int fractional_knapsack(vector<pair<int,int>> val_wt, int sack_wt){
//     vector<int> ratio;
//     for (int i=0; i<val_wt.size(); i++){
//         ratio.push_back(val_wt[i].first / val_wt[i].second);
//     }
//     sort(ratio.rbegin(), ratio.rend());
//     int ans = 0;
//     for (int i=0; i<val_wt.size(); i++){
//         if (val_wt[i].second < sack_wt){
//             ans += val_wt[i].first;
//             sack_wt -= val_wt[i].second;
//         }
//         else{
//             ans += ratio[i] * sack_wt;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<pair<int,int>> val_wt(3,make_pair(0,0));
//     val_wt[0] = make_pair(60,10);
//     val_wt[1] = make_pair(100,20);
//     val_wt[2] = make_pair(120,30);
//     int sack_wt = 50;
//     cout << fractional_knapsack(val_wt, sack_wt);
//     return 0;
// }

//--------indian coin problem------------

// int indian_coins(vector<int> coins, int V){
//     int n = coins.size();
//     int ans = 0;
//     for (int i = n-1; i>=0; i--){
//         if (coins[i] < V){
//             ans += V / coins[i];
//             V = V % coins[i];
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> coins = {1,2,5,10,20,50,100,500,2000};
//     int V = 590;
//     cout << indian_coins(coins,V) << endl;
// }



 