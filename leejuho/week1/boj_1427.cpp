// 백준 1427
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
#include <functional>
#include <sstream>

using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);  
    string num; 
    cin >> num; 

    sort(num.begin(), num.end(), greater<char>()); 

    cout << num; 

 }
 
