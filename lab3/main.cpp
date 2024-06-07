#include "Array3D.cpp"

int main() {
    setlocale(LC_ALL,"Rus");

    // Cube
    // x,y,z - size
    int x = 2, y = 3, z = 2, index = 1;

    Array3D<int> cube(x, y, z);

    // Заполнение
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cube(i,j,k) = index;
                index++;
            }
        }
    }

    std::cout<<"Срез куба в x = 0 - в виде строки"<<std::endl;

    for (int value : cube.GetValuesX(0)) {
        std::cout << value << " ";
    }

    std::cout<<std::endl<<"Срез куба в x = 0 - в виде прямоугольника"<<std::endl;

    std::vector<std::vector<int>> test1 = cube.GetValuesX2D(0);
    for( auto& i : test1){
        for (auto& j: i) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    std::cout<<"Срез куба в y = 2 - в виде строки"<<std::endl;

    for (int value : cube.GetValuesY(2)) {
        std::cout << value << " ";
    }

    std::cout<<std::endl<<"Срез куба в y = 2 - в виде прямоугольника"<<std::endl;

    std::vector<std::vector<int>> test2 = cube.GetValuesY2D(2);
    for( auto& i : test2){
        for (auto& j: i) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    std::cout<<"Срез куба в z = 1 - в виде строки"<<std::endl;

    for (int value : cube.GetValuesZ(1)) {
        std::cout << value << " ";
    }

    std::cout<<std::endl<<"Срез куба в z = 1 - в виде прямоугольника"<<std::endl;

    std::vector<std::vector<int>> test3 = cube.GetValuesZ2D(1);
    for( auto& i : test3){
        for (auto& j: i) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    cube.SetValues0(0,{-1, -2, -3, -4, -5 ,-6});

    std::cout<<"После изменения - срез куба в x = 0 - в виде строки "<<std::endl;

    for (int value : cube.GetValuesX(0)) {
        std::cout << value << " ";
    }

    std::cout<<std::endl<<"Срез куба в x = 0 и y = 1"<<std::endl;

    for (int value : cube.GetValuesXY(0,1)) {
        std::cout << value << " ";
    }

    cube.SetValues01(0,1,{7,7});

    std::cout<<std::endl<<"После изменения срез куба в x = 0 и y = 1"<<std::endl;

    for (int value : cube.GetValuesXY(0,1)) {
        std::cout << value << " ";
    }

    cube.Fill(9,9,9,777);

    std::cout<<std::endl<<"После заполнения 777 срез куба в y = 2 - в виде прямоугольника"<<std::endl;

    std::vector<std::vector<int>> test4 = cube.GetValuesY2D(2);
    for( auto& i : test4){
        for (auto& j: i) {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}