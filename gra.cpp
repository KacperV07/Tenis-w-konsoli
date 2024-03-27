#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

	//





    void displayGrid() {
    cout << "        pole przeciwnika" << "\n";
    cout << "      ---------------------" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  1  |  2  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      | 5 |-----|-----| 6 |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  3  |  4  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "---------------------------------" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  1  |  2  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      | 5 |-----|-----| 6 |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  3  |  4  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      ---------------------" << "\n";
    cout << "           Twoje pole" << "\n";
}
	void atack(int field){
		switch(field){
		case 1:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 2:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 3:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 4:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 5:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 6:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	

	}

	}

	void defend(int field){
		switch(field){
		case 1:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 2:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 3:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 4:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 5:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 6:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	

	}

	}

    int main(){
		// NA RAZIE TYLKO GRA Z BOTEM!
	displayGrid();
	// ATACK
        int field = 0;
	while(field <= 0 || field >= 7){
		cout<<"Wybierz pole jakie chcesz zaatakować (1-6) ";
		cin>>field;
		cout<<endl;
	}	
	atack(field);
        
   
   // DEFEND
    field = 0;
	displayGrid();
	while(field <= 0 || field >= 7){
		cout<<"Wybierz pole jakie chcesz obronić (1-6) ";
		cin>>field;
		cout<<endl;
	}
	defend(field);	
	return 0;
    }
	
