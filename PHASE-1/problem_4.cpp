 #include<iostream>
 using namespace std;

 // Check if a year is a LEAP YEAR or NOT.

 int valid_year(){
    int year;
    cout<<"Enter a year: ";
    cin >> year;

    while(1){
        if (cin.fail()){
            cin.clear();
            cin.ignore(132, '\n');
            cout<<"Enter a valid year: ";
            cin >> year;
        }
        if (!cin.fail()){
            break;
        }
    }

    return year;
 }



 main(){
    int year;
    year = valid_year();

    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0){
        cout<<year<<" is a leap year.";
    }
    else{
        cout<<year<<" is NOT a leap year.";
    }

 }