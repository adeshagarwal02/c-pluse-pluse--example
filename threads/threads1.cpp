/*way to create threads in CPP
 * 1 function pointer
 * 2 Lambda function 
 * 3 functor 
 * 4 Memeber function
 * 5 Static Member function
 * */


#include <iostream>
#include <thread>


/***********using function pointer ****************/

/*void fun (int x){
	while (x-- > 0){
		std::cout<<x<<std::endl;
	}
}

int main(void){
	std::thread t1(fun, 10);
	t1.join();
	return 0;
}*/

/*************** Lambda function ***********************/


/*int main(void){
	std::thread t1([](int x){
			while(x -- > 0)
			{
				std::cout<<x<<std::endl;
			}
			}, 10);
	t1.join();
	return 0;
}*/

/****************functors *********************/
/*

struct dec{
	void operator()(int x){
		while (x-- > 0){
			std::cout<<x<<std::endl;
		}
	}
};

int main(void){
	std:: thread t1(dec(), 10);
	t1.join();
	return 0;
}*/

/**************Member function ***********************/


class dec{
	public:
		void run(int x){
			while (x-- > 0 ){
				std::cout<<x<<std::endl;
			}
		}
};

int main(void){
	dec obj;
	std::thread t1(&dec::run,&obj,10);
	t1.join();
	return 0;
}


/************************staic member  function (class function)******/


/*class dec {
	public:
		static void run(int x){
			while (x-- > 0){
				std::cout<< x << std::endl;
			}
		}
};

int main(){
	std::thread t1(dec::run,10);
	t1.join();
	return 0;
}*/



