/*
 * LinkNode.h
 *
 *  Created on: 2015��6��14��
 *      Author: yuewang
 */

#ifndef LINKNODE_H_
#define LINKNODE_H_

class LinkNode {
public:
	LinkNode();
	virtual ~LinkNode();

	LinkNode* next;
	//void* d; // point to next
};

#endif /* LINKNODE_H_ */
