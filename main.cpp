#include <iostream>

using namespace std;

int Check(int number_one, int number_two, int number_three);
int Swap_Three(int *number_one, int *number_two, int *number_three);
int Swap(int *number_one, int *number_two);

int main() {

    setlocale(LC_ALL,"Rus");
    int number_one, number_two, number_three;

    cout<<"Enter three numbers"<< endl;
    cin>>number_one>>number_two>>number_three;
    cout<<"you entered "<<number_one<<", "<< number_two<<" and "<<number_three<<endl;

    Swap_Three(&number_one,&number_two,&number_three);

    cout<<"After moving the numbers"<<endl;
    cout<< number_one<<" "<< number_two <<" "<<number_three<<endl;

    Check(number_one, number_two, number_three);
}


int Check(int number_one, int number_two, int number_three){
    if(number_one - number_two > 0 && number_one - number_two == number_two - number_three){
        cout<<"Numbers form arithm. progression";
    } else{
        cout<<"Do not form arithms. progression";
    }
}

int Swap(int *number_one, int *number_two){
    int time = *number_one;
    *number_one = *number_two;
    *number_two = time;
}

int Swap_Three(int *number_one, int *number_two, int *number_three){
    if (*number_two > *number_one){
        Swap(number_one,number_two);
    }
    if (*number_three > *number_two){
        Swap(number_two,number_three);
    }
    if (*number_one < *number_two){
        Swap(number_one,number_two);
    }
}

