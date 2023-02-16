#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object
{
private:
	static int m_objectNum;
public:
	// constructor
	Object();
	// destructor
	~Object();
	// additional function
	static int getObjectNum();
};

#endif