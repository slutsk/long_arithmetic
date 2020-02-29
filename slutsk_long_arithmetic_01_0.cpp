// процедура считывания длинных чисел
// из книги С. Окулова
// Программирование в алгоритмах
// переписано на C++
#include <iostream>
using namespace std;
const int BASE = 1000000000;
void readLong(int a[]){
   char ch;
   while( cin >> ch and ch >= '0' and ch <= '9'){ // and ch >= '0' and ch <= '9'
       for(int i = a[0]; i >= 1; i--){
            a[i+1] = a[i+1] + (long long)a[i]*10/BASE;
            a[i] = (long long) a[i] *10 % BASE;
       }
       a[1] = a[1] + ch - '0';
       if(a[a[0]+1] > 0) a[0]++;
   }
}
int main(){
    freopen("i.txt", "r", stdin);
    int arr[100]={0};
    readLong(arr);
    cout << arr[0] << endl;
    for(int i=1; i <= arr[0]; i++) cout <<arr[i]<<' ';
}
