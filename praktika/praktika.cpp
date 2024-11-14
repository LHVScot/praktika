 #include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Структура для хранения информации о товаре
struct Item {
    string name;
    double price;
};

// Функция для вывода меню
void showMenu(vector<Item> &menu) {
    cout << "----- Меню -----" << endl;
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i + 1 << ". " << menu[i].name << " - " << menu[i].price << " руб." << endl;
    }
    cout << "----- -----" << endl;
}

// Функция для получения заказа от клиента
vector<Item> getOrder(vector<Item> &menu) {
    vector<Item> order;
    int choice;

    do {
        showMenu(menu);
        cout << "Выберите пункт меню (0 для выхода): ";
        cin >> choice;

        if (choice > 0 && choice <= menu.size()) {
            order.push_back(menu[choice - 1]);
        }
    } while (choice != 0);

    return order;
}

// Функция для расчета стоимости заказа
double calculateOrderTotal(vector<Item> &order) {
    double total = 0;
    for (size_t i = 0; i < order.size(); ++i) {
        total += order[i].price;
    }
    return total;
}

int main() {
   /* int number, digitCount = 0, sum = 0, zeroCount = 0;
    char choice;
    double average;

    do {
        cout << "\nМеню:\n";
        cout << "1. Ввести число\n";
        cout << "2. Выход\n";
        cout << "Введите ваш выбор: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Введите число: ";
                cin >> number;

                // Определение количества цифр
                int temp = number;
                while (temp != 0) {
                    temp /= 10;
                    digitCount++;
                }

                // Подсчет суммы цифр
                temp = number;
                while (temp != 0) {
                    sum += temp % 10;
                    temp /= 10;
                }

                // Подсчет количества нулей
                temp = number;
                while (temp != 0) {
                    if (temp % 10 == 0) {
                        zeroCount++;
                    }
                    temp /= 10;
                }

                // Вычисление среднего арифметического
                average = static_cast<double>(sum) / digitCount;

                cout << "\nКоличество цифр: " << digitCount << endl;
                cout << "Сумма цифр: " << sum << endl;
                cout << "Среднее арифметическое: " << average << endl;
                cout << "Количество нулей: " << zeroCount << endl;
                break;

            case '2':cout << "Выход из программы.\n";break;
            default:cout << "Неверный выбор. Пожалуйста, выберите 1 или 2.\n";
        }
    }while (choice != 2);
  */
  //задание 2
  /*
  int cell_size;

  cout << "Введите размер клеточки: ";
  cin >> cell_size;

  if (cell_size <= 0) {
    cout << "Размер клеточки должен быть положительным числом." << endl;
    return 1;
  }

  // Создаем строку, представляющую одну клетку
  string cell_line(cell_size, '-');
  string cell_line_with_star = "*";
  cell_line_with_star += cell_line;


  //Выводим шахматную доску
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      if ((i + j) % 2 == 0) {
          cout << cell_line_with_star;

          for(int k=0; k<cell_size; ++k){
            cout << cell_line;
          }
      } else {

          cout << cell_line;
          for(int k=0; k<cell_size; ++k){
            cout << cell_line_with_star;
          }
      }


    }
    cout << endl;
  }
  */
  //задание 3
  /*
  // Задание меню
  vector<Item> menu = {
      {"Кофе", 150.0},
      {"Чай", 100.0},
      {"Торт", 300.0},
      {"Пирожное", 150.0},
      {"Сэндвич", 250.0}
  };

  // Получение количества клиентов
  int numClients;
  cout << "На сколько человек заказ? ";
  cin >> numClients;

  // Создание массива для хранения заказов каждого клиента
  vector<vector<Item>> orders(numClients);

  // Получение заказа от каждого клиента
  for (int i = 0; i < numClients; ++i) {
      cout << "Заказ для клиента " << i + 1 << ":" << endl;
      orders[i] = getOrder(menu);
  }

  // Рассчет стоимости заказа для каждого клиента и вывод результата
  double totalCost = 0;
  for (int i = 0; i < numClients; ++i) {
      double clientCost = calculateOrderTotal(orders[i]);
      cout << "Стоимость заказа для клиента " << i + 1 << ": " << clientCost << " руб." << endl;
      totalCost += clientCost;
  }

  // Вывод общей стоимости заказа
  cout << "Общая стоимость заказа: " << totalCost << " руб." << endl;
*/
  // Массив буквенных обозначений полей
  char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  // Вывод номеров полей
  for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
          cout << letters[j] << i << " ";
      }
      cout << endl;
  }

  
  return 0;
}
