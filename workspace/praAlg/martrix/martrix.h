/*
 * martrix.h
 *
 *  Created on: 2015Äê6ÔÂ17ÈÕ
 *      Author: yuewang
 */

#ifndef MARTRIX_MARTRIX_H_
#define MARTRIX_MARTRIX_H_

#define NULL (void*)0
template<typename T>
class martrix {
public:
	martrix(int row, int col,T* p);
	virtual ~martrix();
	int _row, _col;
	T* _p=NULL;

};

#endif /* MARTRIX_MARTRIX_H_ */
