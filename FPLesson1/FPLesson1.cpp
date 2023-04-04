// FPLesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");    
    bool playAgain = true;
    string action[3] = { "stone","scissors","paper"};
    string actionPlayer = "";
    while (playAgain)
    {
        try {
            cin.clear();
            playAgain = false;
            int actionNumber = 1 + rand() % 9;
            cout << "Take a choice, what you will do? stone, paper, scissors. Just write \n";
            
            cin >> actionPlayer;
            if (actionNumber < 3)
                actionNumber = 0;
            if (actionNumber >= 3 && actionNumber <= 6)
                actionNumber = 1;
            if (actionNumber > 6)
                actionNumber = 2;
            if (actionPlayer != "")
            { 
                cout << "У противника " << action[actionNumber] << endl;
                if (actionPlayer == action[actionNumber]) //ничья
                {
                    cout << "Try another one \n";
                }
                else if (actionPlayer == "paper" && action[actionNumber] == "stone"
                    || actionPlayer == "scissors" && action[actionNumber] == "paper"
                    || actionPlayer == "stone" && action[actionNumber] == "scissors") //выигрыш игрока
                {
                
                    cout << "You win.";
                }
                else  //если не выигрыш игрока
                {
                    cout << "You lose. Wanna quit, loser?\n";
                }
            }
            cout << "Wanna play again ? Type true if yes, and false if no \n";
            cin >> actionPlayer;
            if (actionPlayer == "true")
                playAgain = true;
            cout << playAgain;
            actionPlayer = "";
        }
        catch (exception ex)
        {
            
        }
        
        
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
