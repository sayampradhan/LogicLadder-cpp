#include<iostream>
#include<limits>
using namespace std;

/*
----------------------------
PATTERN 1
----------------------------
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
----------------------------
----------------------------
PATTERN 2
----------------------------
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
----------------------------
----------------------------
PATTERN 3
----------------------------
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
----------------------------
----------------------------
PATTERN 4
----------------------------
1 1 1 1 1
  2 2 2 2
    3 3 3
      4 4
        5
----------------------------
----------------------------
*/

void pattern_1(int n){
    int start_num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<start_num<<" ";
        }
        cout<<endl;
        start_num += 1;
    }
}

void pattern_2(int n){
    int start_num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 5; j >= i; j--){
            cout<<start_num<<" ";
        }
        cout<<endl;
        start_num += 1;
    }
}

void pattern_3(int n){
    int start_num = 1;
    for (int i = 1; i <= n; i++){
        for (int k = n - i; k >= 1; k--){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            cout<<start_num;
        }
        cout<<endl;
        start_num += 1;
    }
}

void pattern_4(int n){
    int start_num = 1;
    for (int i = n; i >= 1; i--){
        for (int k = 0; k <= n - i; k++){
            cout<<" ";
        }
        for (int j = i; j >= 1; j--){
            cout<<start_num;
        }
        cout<<endl;
        start_num += 1;
    }
}

int main(){
    int choice;

    cout<<R"(----------------------------
    PATTERN 1
    ----------------------------
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    ----------------------------
    ----------------------------
    PATTERN 2
    ----------------------------
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4
    5
    ----------------------------
    ----------------------------
    PATTERN 3
    ----------------------------
            1
          2 2
        3 3 3
      4 4 4 4
    5 5 5 5 5
    ----------------------------
    ----------------------------
    PATTERN 4
    ----------------------------
    1 1 1 1 1
      2 2 2 2
        3 3 3
          4 4
            5
    ----------------------------
    ----------------------------)"<<endl<<endl;

    cout<<"Enter your choice: ";
    while(true){
        if (cin >> choice){
            if((choice>=1) && (choice<=4)){
                if(!cin.fail()){
                    break;
                } else{
                    cout<<"Invalid range. Enter 1, 2, 3, or 4: ";
                }
            } 
        } else {
                cout<<"Invalid input. Please enter a digit (1-4): ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    int limit;

    cout<<"Enter the max limit of the pattern: ";
    cin>>limit;
    while (true)
    {
        if (!cin.fail()){
        break;
    } else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
        cout<<"Enter integer value only (with no space): ";
    }
    }

    if (choice == 1) pattern_1(limit);
    else if (choice == 2) pattern_2(limit);
    else if (choice == 3) pattern_3(limit);
    else pattern_4(limit);
    
}