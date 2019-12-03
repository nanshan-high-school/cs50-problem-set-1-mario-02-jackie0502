#include <iostream>
using namespace std;

int main() {
    int high = 0;
    do {
        cout << "請輸入高度:";
        cin >> high;
    }while(high > 8);
    if(high == 1){
      cout << "#  #\n";
    }else if(high == 2){
      cout << " #  #\n##  ##";
    }else if(high == 3){
      cout << "  #  #\n ##  ##\n###  ###";
    }else if(high == 4){
      cout << "   #  #\n  ##  ##\n ###  ###\n####  ####";
    }else if(high == 5){
      cout << "    #  #\n   ##  ##\n  ###  ###\n ####  ####\n#####  #####";
    }else if(high == 6){
      cout << "     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######";
    }else if(high == 7){
      cout << "      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######";
    }else if(high == 8){
      cout << "       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########";
    }
} 
