#include <iostream>
using namespace std;
const int number_of_digits = 9;//число цифр в массиве
void stringToArray(int m[], string s){//функция заполнение массива цифрами
    int n = s.length();
    string reverse_s = "";
    m[0] = (n+number_of_digits-1)/number_of_digits;//запомнить сколько ячеек занято

    for(int i = n-1; i>=0; i--) reverse_s += s[i]; // разворот строки
    int index = 1;
    int p = 1;
    for(int i = 0; i < n; i++){
       if(i !=0 and i % number_of_digits == 0) {
          index++;
          p = 1;
       }
       m[index] = m[index] + (reverse_s[i] - '0')*p;
       p *=10;

    }

}
int main(){
    int a[100]={0};
    string s;
    cin >> s;
    stringToArray(a, s);
    for(int i=1; i <= a[0]; i++){
        cout << a[i] <<" ";
    }

}
