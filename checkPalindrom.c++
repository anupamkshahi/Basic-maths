#include<iostream>
using namespace std;
int main() {
    int x;
    
        if (x < 0) return false;

        int reversed = 0;
        int original = x;

        while (x > 0) {
            int digit = x % 10;
            if (reversed > (INT_MAX - digit) / 10) {
                return false; 
            }

            reversed = reversed * 10 + digit;
            x = x / 10;
        }

       if(original == reversed){
        return true;
       }else{
        return false;
       }
       
    }