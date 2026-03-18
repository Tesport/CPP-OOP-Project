int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice;
    do {
        choice = showMainMenu();

        switch (choice) {
        case 1: showClientMenu(); break;
        case 2: showItemMenu(); break;
        case 3:
            cout << "==========================" << endl;
            cout << "    ОБЩАЯ СТАТИСТИКА      " << endl;
            cout << "==========================\n" << endl;
            cout << "Клиентов: " << loadAllClients().size() << endl;
            cout << "Предметов: " << loadAllItems().size() << endl;
            pressAnyKey();
            break;
        case 4:
            cout << "Выход из программы.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}