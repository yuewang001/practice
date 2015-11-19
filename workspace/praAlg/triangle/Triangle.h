/*
 * Triangle.h
 *
 *  Created on: 2015年11月9日
 *      Author: yuewang
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

/*
 * version1:  定义一个三角形数组，
 */

template <typename T> class Triangle {

private:
	int N;//size of triangle
	T** p; //point to the point of first node

public:
	//Triangle();
	Triangle(int n);
	virtual ~Triangle();
	T *operator[](int aIndex);
};


template <typename T> class body{

};
#endif /* TRIANGLE_H_ */
