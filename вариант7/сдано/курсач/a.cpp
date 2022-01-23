#include<iostream>
#include<string.h>
#include<unistd.h>
#include<time.h>
#include<fstream>
#include<vector>

using namespace std;
string suits[4] = {"s", "h", "c", "d"};
string ranks[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"}; 

void Draw_a_Card();
int Rand_0toN1(int n);
int Select_next_Avaible(int n);
int cards_remaining = 52;
int card_drawn[52];

struct Card {
public:
    char suit;
    char rank;    
};


class Player {
public:    
    string name;
    Card hand[2];
    int money;
};

class Game {
public: 

    void List(int count, string name) {
        ofstream fout;
        fout.open("Список лидеров", ios::app | ios::out);

        if (!fout.is_open()) {
            cout << "Файл не удалось открыть." << endl;
        }

        int count_game = 0;
        int count_point = 0;
        for (auto &player : players) {
            //printf("%10s %5d %5d",player.name.c_str(), count_game, count_point);//
            fout << player.name << " : " << count_game << " : " << count_point << endl;
        }

        fout.close();

    }
 
    void Start(string name, int count) {  
        for (int i = 0; i < count - 1; i++) {
            player.name = names_players[i];
            player.money = 1000;
            players.push_back(player);
        }
        player.name = name;
        players.push_back(player);
    }

    void Show2() {
        for (auto &player : players) {
            cout << "Имя: " << player.name << "\nБаланс: " << player.money << "$\n" << "Карты: ";
            Draw_a_Card();
            cout << "\n" << endl;
        }
    }    
private:
    vector <Player> players;
    Player player;
    string names_players[10] = {"Овенус", "Алмаз", "Юнус", "Мучасас", "Хабиб", "Гарик", "Соленоид", "Настя" , "Ким"};
}; 

int main() {
    srand(time(NULL));
    
    int count = 0;
    cout << "Введите количество игроков(2-10): ";
    cin >> count;

    while (count <= 1 || count > 10) {
        cout << "Количество игроков недолжно превышать 10 и не должно быть меньше 0: ";
        cin >> count;
    }

    string name;
    cout << "Введите ваше имя: ";
    cin >> name; 

    Game f;
    f.Start(name, count);
    f.List(count, name);
    f.Show2();  
    
    return 0;
}

void Draw_a_Card() {
    int r;
    int s;
    int n, card;

    for (int i = 0; i < 2; i++) {
        r = rand() % 14;
        s = rand() % 4;
        cout << ranks[r] << suits[s] << " ";
    }    

    n =  Rand_0toN1(cards_remaining--);
    card = Select_next_Avaible(n);
     
}

int Select_next_Avaible(int n) {
    int i = 0;

    while (card_drawn[i]) {
        i++;
    }

    while(n-- > 0) {
        i++;
        while (card_drawn[i]) {
            i++;
        }
    }

    card_drawn[i] = true;
    return i;
}

int Rand_0toN1(int n) {
    return rand() % n;
}