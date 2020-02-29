#include <iostream>
#include <stack>
using namespace std;
const int number_of_digits = 9;//число цифр в массиве
stack <char> s;
void stackCharToArray(int m[]){//функция заполнение массива цифрами
    int n = s.size();
    m[0] = (n+number_of_digits-1)/number_of_digits;//запомнить сколько ячеек занято
    int index = 1;
    int p = 1;
    for(int i = 0; i < n; i++){
       if(i !=0 and i % number_of_digits == 0) {
          index++;
          p = 1;
       }
       char x = s.top();
       s.pop();
       m[index] = m[index] + (x - '0')*p;
       p *=10;

    }
}
int main(){
    int a[100]={0};
    char ch;
    while (cin >> ch and ch>='0' and ch<='9') s.push(ch);
    stackCharToArray(a);
    for(int i=1; i <= a[0]; i++){
        cout << a[i] <<" ";
    }

}
