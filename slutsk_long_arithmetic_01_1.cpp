#include <iostream>
using namespace std;
//функция заполнение массива цифрами
void stringToArray(int m[], string s){
    const int number_of_digits = 9;//число цифр в массиве
    int n =s.length();
    //вычисление необходимого числа ячеек массива
    m[0] = (n+number_of_digits-1)/number_of_digits;//округление вверх
    int index = 1, p = n;
    while( index <= n/number_of_digits ){
       int tens = 1;
       for(int i = 0; i < number_of_digits; i++){
           m[index] += (s[p-i-1] - '0')*tens;
           tens *=10;
       }
       p -= number_of_digits;
       index++;
    }
    for(int i = 0; i<n%number_of_digits; i++){
        m[index] = m[index]*10+s[i]-'0';
    }
}
//находим произведение
void multiply_numbers(int a[], int b[], int c[]){
    int in_the_mind = 0;
    for(int i=1; i<=b[0]; i++){
       for(int j=1; j<a[0]; j++){
          long long mult = (long long) a[j]*b[i];
          c[i+j-1] = mult
       }
    }
    return;
}

int main(){
    int a[100]={0};
    int b[100]={0};
    int c[200]={0};
    string s;
    cin >> s;
    stringToArray(a, s);
    cin >> s;
    stringToArray(b, s);
    multiply_numbers(a, b, c);
     for(int i=1; i <= a[0]; i++){
        cout << a[i] <<" ";
    }

}
