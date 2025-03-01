#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <algorithm> 

using namespace std;

// funcao para exibir o menu da calculadora
void exibir_menu() {
    cout << "\n===== CALCULADORA =====\n";
    cout << "1. adicao (+)\n";
    cout << "2. subtracao (-)\n";
    cout << "3. multiplicacao (*)\n";
    cout << "4. divisao (/)\n";
    cout << "5. potencia (^)\n";
    cout << "6. raiz quadrada (√)\n";
    cout << "7. logaritmo (log)\n";
    cout << "8. seno (sin)\n";
    cout << "9. cosseno (cos)\n";
    cout << "10. tangente (tan)\n";
    cout << "11. sair\n";
    cout << "escolha uma opcao: ";
}

int main() {
    double num1, num2;
    int escolha;

    do {
        exibir_menu();
        cin >> escolha;

        if (cin.fail()) { // verifica se a entrada e invalida
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "entrada invalida! por favor, escolha um numero de 1 a 11." << endl;
            continue;
        }

        if (escolha == 11) {
            cout << "obrigado por usar a calculadora. ate mais!" << endl;
            break;
        }

        if (escolha >= 1 && escolha <= 5) {
            cout << "digite o primeiro numero: ";
            cin >> num1;
            cout << "digite o segundo numero: ";
            cin >> num2;
        } else if (escolha >= 6 && escolha <= 10) {
            cout << "digite um numero: ";
            cin >> num1;
        } else {
            cout << "opcao invalida! escolha um numero de 1 a 11." << endl;
            continue;
        }

        cout << fixed << setprecision(2);
        cout << "\nRESULTADO: ";
        switch (escolha) {
            case 1:
                cout << num1 + num2 << endl;
                break;
            case 2:
                cout << num1 - num2 << endl;
                break;
            case 3:
                cout << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << num1 / num2 << endl;
                else
                    cout << "erro: nao e possivel dividir por zero!" << endl;
                break;
            case 5:
                cout << pow(num1, num2) << endl;
                break;
            case 6:
                if (num1 >= 0)
                    cout << sqrt(num1) << endl;
                else
                    cout << "erro: nao e possivel calcular a raiz quadrada de um numero negativo!" << endl;
                break;
            case 7:
                if (num1 > 0)
                    cout << log(num1) << endl;
                else
                    cout << "erro: o logaritmo e indefinido para numeros menores ou iguais a zero!" << endl;
                break;
            case 8:
                cout << sin(num1) << endl;
                break;
            case 9:
                cout << cos(num1) << endl;
                break;
            case 10:
                cout << tan(num1) << endl;
                break;
        }
    } 
    while (true);

    return 0;
}
