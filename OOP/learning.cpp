#include<iostream>
using namespace std;

class Hero{
	// properties
	private:
		int health;
	
	public:
		char level;
	
	Hero(){
		cout<<"Simple constructor called: ";
	}
	Hero(int health){
		this -> health = health;
	}
	int getHealth(){
		return health;
	}
	int getlevel(){
		return level;
	}
	void setHealth(int health){
		health = health;
	}
	void setlevel(char ch){
		level = ch;
	}
};

int main(){
	Hero suresh;
	suresh.setHealth(70);
	suresh.setlevel('A');
	
	cout<<suresh.getHealth();
	return 0;
}
