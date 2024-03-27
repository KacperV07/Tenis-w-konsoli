#include <iostream>
using namespace std;

    void displayGrid() {
    std::cout << "        Pole przeciwnika" << "\n";
    std::cout << "      ---------------------" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      |   |  1  |  2  |   |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      | 5 |-----|-----| 6 |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      |   |  3  |  4  |   |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "---------------------------------" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      |   |  1  |  2  |   |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      | 5 |-----|-----| 6 |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      |   |  3  |  4  |   |" << "\n";
    std::cout << "      |   |     |     |   |" << "\n";
    std::cout << "      ---------------------" << "\n";
    std::cout << "           Twoje pole" << "\n";
}

    int main(){

	displayGrid();
	
        int pole = 0;
	while(pole <= 0 || pole >= 7){
		cout<<"Wybierz pole jakie chcesz zaatakować (1-6)"<<endl;
		cin>>pole;
	}	

	switch(pole){
		case 1:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	
		case 2:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	
		case 3:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	
		case 4:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	
		case 5:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	
		case 6:
		cout<<"Zaatakowałeś pole nr."<<pole<<endl;
		break;	

	}
        return 0;
    }
