#include <iostream>
#include <array>
#include <string>

//class Log {
//
//public:
//	enum LogLevel : unsigned char {
//		LevelError, LevelWarning, LevelInfo
//	};
//
//private:
//	LogLevel m_LogLevel = LevelInfo;
//
//public:
//	void SetLevel(LogLevel level) {
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message) {
//		if (m_LogLevel >= LevelError)
//			std::cout << "[Error]:" << message << std::endl;
//	}
//
//	void Warn(const char* message) {
//		if (m_LogLevel >= LevelWarning)
//			std::cout << "[Warning]:" << message << std::endl;
//	}
//
//	void Info(const char* message) {
//		if (m_LogLevel >= LevelInfo)
//			std::cout << "[Info]:" << message << std::endl;
//	}
//
//};
//
//class Printable {
//public:
//	virtual std::string GetName() = 0;
//};
//
//class Entity : public Printable {
//protected:
//	float X, Y;
//public:
//
//	Entity() {
//		std::cout << "Entity Constructed" << std::endl;
//		X = 0.0f;
//		Y = 0.0f;
//	}
//
//	Entity(float x, float y) {
//		std::cout << "Entity Constructed" << std::endl;
//		X = x;
//		Y = y;
//	}
//
//	void Move(float x, float y) {
//		X = x;
//		Y = y;
//	}
//
//	virtual	std::string GetName() override {
//		return "Entity";
//	}
//
//	void Print() {
//		std::cout << X << ", " << Y << std::endl;
//	}
//
//	~Entity() {
//		std::cout << "Entity Destructed" << std::endl;
//	}
//};
//
//class Player : public Entity {
//public:
//	std::string Name;
//
//	Player(const char* name) {
//		Name = name;
//	}
//
//	std::string GetName() override {
//		return Name;
//	}
//
//	void PrintName() {
//		std::cout << Name << std::endl;
//	}
//
//	void Print() {
//		std::cout << X << std::endl;
//	}
//};
//
//void PrintName(Printable* obj) {
//	std::cout << obj->GetName() << std::endl;
//}

int main() {

	//static const int size = 5;

	//int arr[size];
	//int* ptr = arr;
	//int count = sizeof(arr) / sizeof(int);
	//std::cout << sizeof(arr) / sizeof(int) << std::endl;

	//*((int*)((char*)arr + 8)) = 500;
	//arr[2] = 500;
	//2[arr] = 500;

	/*int* arr = new int[60];

	for (int i = 0; i < 60; i++) {
		arr[i] = i;
	}*/

	//std::array<int, size> stdArr;

	//std::cout << stdArr.size() << std::endl;

	std::string name = "Jon";
	name[1] = 'a';
	name += 'e';
	std::string info = "NeverLand";
	std::cout << name.size() << std::endl;
	std::cin.get();
}

