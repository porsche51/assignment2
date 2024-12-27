#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal {
public:
	void makeSound() {
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Meow!" << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Moo!" << endl;
	}
};


int main() {
	const int m = 3;
	Animal* animals[m] = { new Dog(), new Cat(), new Cow() };

	for (int i = 0; i < m; i++) {
		animals[i] -> makeSound();
	}

	for (int i = 0; i < m; i++) {
		delete animals[i];
	}

	return 0;
}