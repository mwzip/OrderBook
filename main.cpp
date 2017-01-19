#include <iostream>
#include <OrderBook.h>

using namespace std;

int main() {
    OrderBook book;
    cout << book << endl;

    book.add_bid(100, 50);
    book.add_bid(10, 60);
    book.add_ask(123, 123);
    book.add_ask(1, 50);
    auto spread = book.get_bid_ask().spread();

    cout << book << endl;
    cout << book.get_bid_ask() << endl;

    return 0;
}
