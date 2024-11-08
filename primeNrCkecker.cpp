#import <iostream>
using namespace std;

int main() {
    int nr, isPrime;
    cout << "Prime number checker" << endl;
    cin >> nr;
    //
    if((nr == 1) || (nr == 0)) {
        isPrime = 0;
    } else {
        for(int i = 2; i <= (nr - 1); i++) {
        if(nr % i != 0) {
            isPrime = 1;
        } else {
            isPrime = 0;
            break;
        };
    };
    }
    //
    if(isPrime) {
        cout << nr << " is prime." << endl;
    } else {
        cout << nr << " is not prime." << endl;
    }
    return 0;
}