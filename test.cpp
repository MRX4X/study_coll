#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, c, d, e;
    cout<<"Напишите ответ на пример\n";
    cout<<"10+10=?\n";
    cin>>a;
    if (a==20){
        cout<<"Правильно\n";
        e++;
    } else{
        cout<<"Неправильно\n";
    }
    cout<<"Напишите ответ на пример\n";
    cout<<"10+30=?\n";
    cin>>b;
    if (b==40){
        cout<<"Правильно\n";
        e++;
    } else{
        cout<<"Неправильно\n";
    }
    cout<<"Напишите ответ на пример\n";
    cout<<"50+30=?\n";
    cin>>b;
    if (b==90){
        cout<<"Правильно\n";
        e++;
    } else{
        cout<<"Неправильно\n";
    }
    cout<<"Напишите ответ на пример\n";
    cout<<"33+110=?\n";
    cin>>b;
    if (b==143){
        cout<<"Правильно\n";
        e++;
    } else{
        cout<<"Неправильно\n";
    }
    cout<<"Напишите ответ на пример\n";
    cout<<"200+111=?\n";
    cin>>b;
    if (b==311){
        cout<<"Правильно\n";
        e++;
    } else{
        cout<<"Неправильно\n";
    }
    cout<<"Ваша итоговая отметка"<<" "<<e;
    return 0;
}
