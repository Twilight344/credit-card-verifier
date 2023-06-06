#include <iostream>
int getdigit(const int number);
int sumodd(const std::string cardno);
int sumeven(const std:: string cardno);

int main(){
    std:: string cardnumber;
    int result = 0; 
    std:: cout << "Enter a credit card number: ";
    std:: cin >> cardnumber;
    result = sumodd(cardnumber) + sumeven(cardnumber);
    if (result % 10 == 0){
        std:: cout << cardnumber << " is a valid number";

    }
    else{
        std:: cout << cardnumber << " is not a valid numbeer";
    }
    return 0;
}

int getdigit(const int number){
    return number % 10 + (number / 10 % 10);

}
int sumodd(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1; i>=0; i-=1){
       sum+= getdigit(cardnumber[i] - '0' ) ;
       return sum;
    }
}
int sumeven(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2; i>=0; i-=2){
       sum+= getdigit((cardnumber[i] - '0' ) * 2 ) ;
       return sum;
    }
}
