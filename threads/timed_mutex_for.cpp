/* std::timed_mutex is blocked till timeout time or the lock is acquired and returns true if success otherwise false.
 * Member function:
 * 	a) lock
 * 	b) try_lock
 * 	c) try_lock_for
 * 	d) try_lock_until
 * 	e) unlock
 */

/* try_lock_for: wait until specified timeout duration has elapsed or the lock is acquired, whichever come first.
 * on Successfull lock acquisition returns true otherewise returns false 
 */


#include <iostream>
#include <thread>
#include <mutex>

int count {};

std::timed_mutex m;

void increment(int i){
	if(m.try_lock_for(std::chrono::seconds(1))){
		++count;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout<<"Thread :" << i <<" entered"<<std::endl;
		m.unlock();
	}
	else
		std::cout<<"Thread :" << i <<" couldn't entered"<<std::endl;

}


int main(void){
	std::thread t1(increment,1);
	std::thread t2(increment,2);
	t1.join();
	t2.join();
	std::cout<<"counter : "<<count<<std::endl;
	return 0;
}
