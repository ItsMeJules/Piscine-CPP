#include <iostream>
#include <stdint.h>

typedef struct	s_data {
	int age;
	double tempC;
	float height;
	std::string name;
}				Data;

uintptr_t serialize(Data *data) {
	return reinterpret_cast<uintptr_t>(data);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

void printStruct(Data *data) {
	std::cout << "data->age = " << data->age << std::endl;
	std::cout << "data->tempC = " << data->tempC << std::endl;
	std::cout << "data->height = " << data->height << std::endl;
	std::cout << "data->name = " << data->name << std::endl;
}

int main() {
	Data *dataPtr = new Data;
	dataPtr->age = 21;
	dataPtr->tempC = 8.4;
	dataPtr->height = 180.3;
	dataPtr->name = "Jules";
	printStruct(dataPtr);

	uintptr_t uPtr = serialize(dataPtr);
	std::cout << std::endl;
	std::cout << "Address of dataPtr " << dataPtr << std::endl;
	std::cout << "Address of uPtr " << &uPtr << std::endl;

	Data *deserializedDataPtr = deserialize(uPtr);
	std::cout << std::endl;
	printStruct(deserializedDataPtr);
	std::cout << std::endl;
	std::cout << "Address of deserializedDataPtr " << &deserializedDataPtr << std::endl;
	std::cout << "Address of uPtr " << &uPtr << std::endl;
	delete dataPtr;
	return 1;
}