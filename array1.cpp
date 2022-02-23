# include <iostream>
using namespace std;

int main(){
    
    int LuckyNames[] = {4, 8, 23, 45, 23, 42, 15};
    
    cout << LuckyNames[3] << endl;
    
    LuckyNames[0] = 15; // asign a different values.

    cout << LuckyNames[0];

}