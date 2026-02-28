#include<iostream>
using namespace std;
void theatre(int n1, int n2, int arr[6][6]){
    cout<<"--------screen--------"<<endl;;
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
void booking(int n1, int n2, int arr[6][6]){
    int r, c;
    int choice;
    int ticketPrice = 0;
    do{
        cout << "Enter booking row: ";
        cin >> r;
        cout << "Enter booking column: ";
        cin >> c;
        r--;
        c--;
        if(r >= 0 && r < n1 && c >= 0 && c < n2){
            if(arr[r][c] == 1){
                cout<<"Seat already booked\n";
            }
            else{
                cout << "Seat booked successfully.\n";
                arr[r][c] = 1;
                if(r == 0 || r == 1) ticketPrice += 200;
                else if(r == 2 || r == 3) ticketPrice += 400;
                else if(r == 4 || r == 5) ticketPrice += 600;
            }
            
            cout<<" ";
            for(int i = 0; i < n2; i++){
                cout<<"  "<<i+1;
            }
            cout << endl;
            for(int i = 0; i < n1; i++){
                cout<<i+1<<" ";
                for(int j = 0; j < n2; j++){
                    if(arr[i][j] == 1){
                        cout<<" p ";
                    }
                    else if(arr[i][j] != 1){
                        cout<<" _ ";
                    }
                }
                if(i == 0 || i == 1) cout<<"200rs ";
                    else if(i == 2 || i == 3) cout<<"400rs ";
                    else if(i == 4 || i == 5) cout<<"600rs ";
                cout << endl;
            }
            cout << endl;
        } else {
            cout << "Invalid seat selection.\n";
        }
        cout<<"Total ticket price = "<<ticketPrice<<"rs"<<endl;
        cout<<"Do you want to book more seats? 1.Yes, 2.No: ";
        cin>>choice;
    }while(choice == 1);
    cout<<"Total ticket price = "<<ticketPrice<<"rs"<<endl;
}
int main(){
    int n1 = 6, n2 = 6;
    int arr[6][6] = {0};
    cout<<"Initial theatre: "<<endl;
    theatre(n1, n2, arr);
    booking(n1, n2, arr);

}
