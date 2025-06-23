#include "Character.h"
#include "GameManager.h"
#include <ctime>

bool isBlank(const string& s)
{
    for (char c : s) 
    {
        if (c != ' ' && c != '\t') return false;
    }
    return true;
}

int main() 
{
    srand(static_cast<unsigned int>(time(0)));

    string name;
    do {
        cout << "캐릭터 이름을 입력하세요: ";
        getline(cin, name);
        if (isBlank(name))
        {
            cout << "이름은 공백일 수 없습니다. 다시 입력하세요.\n";
        }
    } while (isBlank(name));

    Character player(name);
    cout << "캐릭터 " << player.name << " 생성 완료!\n";
    player.Status();

    while (true) 
    {
        cout << "\n다음 행동을 선택하세요:\n1. 전투 시작\n2. 상태 보기\n3. 종료" << endl;
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            if (!GameManager::battle(player)) 
            {
                break;
            }
        }
        else if (choice == 2) 
        {
            player.Status();
        }
        else if (choice == 3) 
        {
            cout << "게임을 종료합니다." << endl;
            break;
        }
        else 
        {
            cout << "잘못된 입력입니다." << endl;
        }
    }

    return 0;
}
