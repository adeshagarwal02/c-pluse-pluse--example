/*Mutual Exclusion
 * Is used to avoid race condition.
 * we use lock(), unlock(), on the mutex to avoid race condition
 * */

/************************ Blocking call ****************************/


#include <iostream>
#include <thread>
#include <mutex>



int data = 0;

std::mutex m; //mutex variable 

void increase(int x, int no){
       while(x-- > 0){	
	       m.lock();  //blocking
	       std::cout<<"Thread "<< no <<":"<<data++<<std::endl;     // critical section 
	       m.unlock();
       }
}


int main(void){
	std::thread t1(increase, 10, 1);
	std::thread t2(increase, 10, 2);
	t1.join();
	t2.join();
	return 0;
}
