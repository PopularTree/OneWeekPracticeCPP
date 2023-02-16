#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

using namespace std;

template<typename T> class Collection
{
private:
	// data of array
	T *m_pArray;
	// length of array;
	int m_length;
public:
	// constructor
	Collection(T *array, int length){
		m_pArray = new T[length];
		m_length = length;
		for(int i = 0; i < m_length ; i++){
			m_pArray[i] = array[i];
		}
	}
	// destructor
	~Collection(){
		delete [] m_pArray;
	}
	// get maximum value
	T getMax(){
		T max = m_pArray[0];
		for(int i = 0; i < m_length ; i++){
			if(max < m_pArray[i]){
				max = m_pArray[i];
			}
		}
		return max;
	}
	// get minimum value
	T getMin(){
		T min = m_pArray[0];
		for(int i = 0; i < m_length ; i++){
			if(min > m_pArray[i]){
				min = m_pArray[i];
			}
		}
		return min;
	}
	// display component
	void showArray(){
		for(int i = 0; i < m_length ; i++){
			cout << m_pArray[i] << " ";
		}
		cout << endl;
	}
};

#endif