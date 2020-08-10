#include <iostream>
using namespace std;

int result(int P , int H){
    int b;
    cin >> b;
    for(int i = 0 ; i < b ; i++){
    while(P > 0 && H > 0 ){
        
        H -= P;
        P /= 2;
    }
    if(H <= 0){
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
return 0;
}
int main() {
	// your code goes here
	int P , H;
    cin >> H;
    cin >> P;
    result(P , H);
	return 0;
}