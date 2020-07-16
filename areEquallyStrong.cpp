#include <cstdlib>
bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    if(yourLeft+yourRight==friendsLeft+friendsRight){
        if(abs(yourLeft-yourRight)==abs(friendsLeft-friendsRight)){
        return true;
        }
    }
    return false;
}
