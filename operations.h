#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <iostream>

class operations {
public:
	operations();
	~operations();
private:
	namespace operators {
		enum ops {add, subtract, multiply, division};
	}

};


#endif