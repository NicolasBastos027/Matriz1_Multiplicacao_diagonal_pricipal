#include <iostream>
using namespace std;
int main() {
    
    int matriz[3][3];
    int k = 0;
    
    cout<< "Informe k:";
    cin>> k;
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "informe o item da posição["<<  i+1 << "][" << j+1 << "]:";
            cin>> matriz[i][j];
        }
    }
    cout << "Matriz antes da multiplicação:";
    for (int i = 0; i<3; i++){
        cout <<"\n";
        for(int j = 0; j<3; j++){
            cout<< matriz[i][j] << " ";
        }
    }
    for(int i=0;i<3;i++){
        matriz[i][i] *=k;
    }
    cout << "Matriz depois da multiplicação:";
    for (int i = 0; i<3; i++){
        cout <<"\n";
        for(int j = 0; j<3; j++){
            cout<< matriz[i][j] << " ";
        }
    }

    return 0;
}