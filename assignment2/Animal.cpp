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
	~Dog() {
		Delete this;
	}
};

class Cat : public Animal {
public:
	void makeSound() {
		cout << "Meow!" << endl;2
	}
	~Cat() {
		Delete this;
	}
};

class Cow : public Animal {
public:
	void makeSound() {
		cout << "Moo!" << endl;
	}
	~Cow() {
		Delete this;
	}
};


int main() {
	const int m = 3;
	Animal* animals[m] = { new Dog(), new Cat(), new Cow() };

	for (int i = 0; i < m; i++) {
		animals[i] -> makeSound();
	}

	return 0;
}