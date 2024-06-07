#include "../inc/App.h"


void App::start() {
    auto userManager = FileUserManager();
    auto userRepository = FileUserRepository("../data/user.txt");

    std::vector<User> users =  userRepository.Get();
    int operation, amountUser = users.size();
    User currentUser;

    while (true) {
        std::cout << "\n**********\n�������� ��������:\n-1) ����� �� ����������\n0) ����� �� ��������\n1) ����\n2) ������������������\n3) ����� ������������ �� �����\n4) ����������� ���� �������������" << std::endl;
        std::cin >> operation;

        if(operation == -1){
            return;
        } else if(operation == 0) {
            if(userManager.IsAuthorized())
                userManager.SignOut();
        } else if(operation == 1) {
            if(!userManager.IsAuthorized())
            {
                auto loginData = getLoginPassword();
                currentUser = userRepository.GetByLoginPassword(loginData.first,loginData.second);
                userManager.LogIn(currentUser);
                if(userManager.IsAuthorized()) {
                    std::cout << "������������ " << currentUser.getName() << " �����������" << std::endl;
                }
            }
            else{
                std::cout << "����� ����� ������� ������� �� ��������" << std::endl;
            }

        } else if(operation == 2) {
            if (!userManager.IsAuthorized()) {
                auto registrationData = getRegistrationData();
                currentUser = User(amountUser + 1, registrationData[0], registrationData[1], registrationData[2]);
                userManager.SignIn(currentUser);
                if (userManager.IsAuthorized()) {
                    std::cout << "������������ " << currentUser.getName() << " ���������������" << std::endl;
                }
            } else{
                std::cout << "����� ����� ������� ������� �� ��������" << std::endl;
            }
        } else if(operation == 3){
            if(userManager.IsAuthorized())
            {
                std::cout<<"������� ��� ������������:\n";
                std::string userName;
                std::cin >> userName;
                auto findUser = userRepository.GetByName(userName);
                std::cout << findUser.getId() << " " <<  findUser.getName() << " " << findUser.getLogin() << std::endl;
            } else {
                std::cout << "������� ���������� ��������������" << std::endl;
            }
        } else if(operation == 4){
            if(userManager.IsAuthorized()){
                std::cout<<"������ ���� �������������:\n";
                for( auto& user : users){
                    std::cout << user.getId() << " " << user.getName() << " " << user.getLogin() << std::endl;
                }
            } else{
                std::cout << "������� ���������� ��������������" << std::endl;
            }

        }
    }
}

std::pair<std::string, std::string> App::getLoginPassword(){
    std::string login, password;
    std::cout << "������� �����:" << std::endl;
    std::cin >> login;
    std::cout << "������� ������:" << std::endl;
    std::cin >> password;
    return std::make_pair(login,password);
}

std::vector<std::string> App::getRegistrationData(){
    std::string name,login, password;
    std::cout << "������� ���� ���:" << std::endl;
    std::cin >> name;
    std::cout << "������� �����:" << std::endl;
    std::cin >> login;
    std::cout << "������� ������:" << std::endl;
    std::cin >> password;
    return {name, login, password};
}
