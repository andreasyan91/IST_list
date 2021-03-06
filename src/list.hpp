#ifndef LIST_HPP
#define LIST_HPP
#include <node.hpp>
class List
{
	protected:
		/**
		 * a pointer to the first node
		 */
		Node* first;
		/**
		 * a pointer to the last node
		 */
		Node* last;
		/**
		 * the size of the list
		 */
		int size;
		/**
		 * checks if the index is in the range of the size
		 */
		bool is_out(unsigned int) const;	
		/**
		 * returns the node in the given position
		 */
		Node* get_node(unsigned int);
		const Node* get_node(unsigned int) const;
	public:
		/**
		 * @brief the default constructor
		 */
		List();
		/**
		 * @brief parametralized constrtuctor
		 * @details creates a list with one element , with given value,
		 * @param int the value of the node
		 */
		List(int);
		List(const List &l);
		/**
		 * @brief adds an element to the given position
		 * @param unsigned int the position
		 * @param int the value
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool add(unsigned int, int);	
		/**
		 * @brief class destructor
		 * @iterates over all existing nodes and deletes them
		 */
		~List();
		/**
		 * @brief adds an element at the end of the list
		 * @param int the value
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool push(int);
		/**
		 * @brief removes the last element of the list
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool pop();
		/**
		 * @brief removes the  element of the given position
		 * @param unsigned int the position
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool remove(unsigned int);
		/**
		* @brief searches an element in the list
		* @param  int the value to be searched
		* @return the index of the element, if the element exists
			    -1 otherwise
		*/
		int search_by_value(int);
		/**
		 * @brief  returns value of the given index
		 * @param  unsigned int the index
		 * @return the value of the given index, if the index 
		 *	   is in the range, INT:MAX otherwise
		 */
		int get(unsigned int) const;
	    	/**
		 * @brief changes the value of the given elements element
		 * @param unsigned int the position
		 * @param int the value 
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool set(unsigned int,int);
		/**
		 * @brief swaps the values of the i_th and j_th elements
		 * @param unsigned int the first position
		 * @param unsigned int the second postion
		 * @return true if the operation is succsefully done, false
		     otherwise
		 */
		bool swap(unsigned int, unsigned int);
		/**
		 * @brief prints the current content of the list
		 */
		void print();
		/**
		 * @brief returns value of the first element if it exists , INT_MAX 
		 *	    otherwise
		 *@return int value of the first element, INT_MAX otherwise
		 */
		int get_first();
		/**
		 * @brief returns value of the last element if it exists , INT_MAX 
		 *	    otherwise
		 *@return int value of the last element, INT_MAX otherwise
		 */
		int get_last();

		/**
		 * @brief returnes the size of the list
		 * @return unsigned int the size of the list
		 */

		unsigned int get_size();
};
#endif
