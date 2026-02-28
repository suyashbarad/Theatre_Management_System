#include <iostream>
using namespace std;

class Theatre {
private:
    int rows, cols;
    int seats[10][10]; 

public:
    Theatre(int r, int c) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                seats[i][j] = 0;
            }
        }
    }

    void display() {
        cout << "  ";
        for (int i = 0; i < cols; i++) cout << "  " << i + 1;
        cout << endl;

        for (int i = 0; i < rows; i++) {
            cout << i + 1 << " ";
            for (int j = 0; j < cols; j++) {
                if (seats[i][j] == 1) cout << " p ";
                else cout << " _ ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void booking() {
        int r, c, choice;
        do {
            cout << "Enter row: ";
            cin >> r;
            cout << "Enter col: ";
            cin >> c;
            r--; c--;

            if (r >= 0 && r < rows && c >= 0 && c < cols) {
                if (seats[r][c] == 1) {
                    cout << "Already booked\n";
                } else {
                    seats[r][c] = 1;
                    cout << "Booked successfully\n";
                }
                display();
            } else {
                cout << "Invalid seat\n";
            }
            cout << "Book more? (1:Yes, 2:No): ";
            cin >> choice;
        } while (choice == 1);
    }
};

int main() {
    Theatre t1(5, 6);
    Theatre t2(4, 4);
    Theatre t3(3, 8);

    cout << "--- Theatre 1 ---" << endl;
    t1.display();
    t1.booking();

    cout << "--- Theatre 2 ---" << endl;
    
    t2.display();
    t2.booking();
    
    cout << "--- Theatre 3 ---" << endl;
    t3.display();
    t3.booking();



    return 0;
}
