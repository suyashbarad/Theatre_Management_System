#include<iostream>
using namespace std;

class Theatre {
    int n1, n2;
    int arr[6][6];

public:
    Theatre() {
        n1 = 6;
        n2 = 6;
        for(int i=0;i<6;i++)
            for(int j=0;j<6;j++)
                arr[i][j]=0;
    }

    void theatre() {
        cout<<"--------screen--------"<<endl;
        cout<<" ";
        for(int i = 0; i < n2; i++){
            cout<<"  "<<i+1;
        }
        cout << endl;
        for(int i = 0; i < n1; i++){
            cout<<i+1<<" ";
            for(int j = 0; j < n2; j++){
                cout<<" _ ";
            }
            if(i == 0 || i == 1) cout<<"200rs ";
            else if(i == 2 || i == 3) cout<<"400rs ";
            else if(i == 4 || i == 5) cout<<"600rs ";
            cout << endl;
        }
        cout << endl;
    }

    void ticketPrint(int seats[][2], int total, int count, string name, string date, string M_name){
        cout<<"================================\n";
        cout<<"          TICKET PRINT\n";
        cout<<"================================\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Date: "<<date<<endl;
        cout<<"Movie Name: "<<M_name<<endl;
        cout<<"Seats booked: \n";
        for(int i = 0; i < count; i++){
            cout<<"("<<seats[i][0]<<", "<<seats[i][1]<<") ";
        }
        cout<<endl;
        cout<<"Total price: "<<total<<"rs"<<endl;
        cout<<"================================\n";
        cout<<"        Enjoy your show\n";
        cout<<"================================\n";
    }

    void booking(string name, string date, string M_name){
        ticketPrint(seats, ticketPrice, seatcount, name, date, M_name);
    }
};

int main(){
    Theatre t;
    string name;
    string date;
    string M_name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter date in format (DD/MM/YYYY): ";
    cin>>date;
    cout<<"1.Dhurandhar\n2.FantasticFour\n3.Saiyaara\nEnter movie name: ";
    cin>>M_name;
    cout<<"Initial theatre: "<<endl;
    t.theatre();
    t.booking(name, date, M_name);
}
