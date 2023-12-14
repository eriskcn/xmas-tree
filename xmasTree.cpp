// facebook: chetverty
// instagram: semaphores_synchronization

#include<iostream>
#include<ctime>
#include<chrono>
#include<cstdlib>
#include<thread>
using namespace std;

void xmasTree(int height){
    string colors[] = {"\033[1;31m", "\033[33m", "\033[1;34m"};
    cout << endl;

    for (int i = 0; i < height; ++ i){
        cout << string(height - i, ' ');
        for (int j = 0; j < (2 * i) + 1; ++ j){
            if (static_cast<double>(rand()) / RAND_MAX < 0.1){
                string color = colors[rand() % 3];
                cout << color;
            }else{
                cout << "\033[32m";
            }

            cout << "*";
        }

        cout << endl;
    }

    cout << string(height - 1, ' ') << "mWm" << endl;
    cout << string(height - 1, ' ') << "mWm" << endl;
    string color = colors[rand() % 3];
    cout << color << string(height - 7, ' ') << "Merry Christmas" << endl;
}

int main(){
    srand(time(0));
    while (true){
        xmasTree(16);
        this_thread::sleep_for(chrono::milliseconds(200));
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }

    return 0;
}