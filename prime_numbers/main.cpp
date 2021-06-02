#include <iostream>
#include <cmath> // pow, sqrt

using namespace std;

//check if a number is prime or not
bool is_prime(int num) {
    for(int i = 2; i < sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    //these four lines are here to increase the generalizability of the code
    int number_of_digits = 3;
    int starts_with = 5;
    int starting_point = (int)pow(10, number_of_digits-1) * starts_with;
    int end_point = starting_point + (int)pow(10, number_of_digits-1);

    for(int num = starting_point; num < end_point; num++) {
        if(is_prime(num)) {
            cout << num << endl;
        }
    }
    return 0;
}
