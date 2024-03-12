#include <iostream>

using namespace std;

int main() {

    double euro;
    cout << "Please enter the value you would like to exchange from EURO." << endl;
    cin >> euro;

    string currency;
    double BGN = euro * 1.95;
    double USD = euro * 1.09;
    double YEN = euro * 161.08;
    double POUND = euro * 0.85;

    cout << "Please enter the desired currency! - BGN, USD, YEN or POUND" << endl;
    while (true) {
        cin >> currency;

        if (currency == "BGN" || currency == "USD" || currency == "YEN" || currency == "POUND") {
            break;
        }
        else {
            cout << "Please enter one of the listed above currencies!" << endl;
        }
    }

    if (currency == "BGN") {
        cout << euro << " euro are " << BGN << " lev." << endl;
    }
    else if (currency == "USD") {
        cout << euro << " euro are " << USD << " dollars." << endl;
    }
    else if (currency == "YEN") {
        cout << euro << " euro are " << YEN << " yen." << endl;
    }
    else if (currency == "POUND") {
        cout << euro << " euro are " << POUND << " pounds." << endl;
    }

    return 0;
}