#include<iostream>
using namespace std;

class Box
{
		public:
				/* 2 constuct function */
				//Box();	//exti define 
				Box():height(2),width(2),length(2){}
				Box(int h, int w, int len):height(h),width(w),length(len){}

				int volume();
				int change_value();
		private:
				int height;
				int width;
				int length;
};

/* 
	 Box::Box()
	 {
	 height = 10;
	 width = 10;
	 length =10;
	 }
 */

int Box::change_value()
{
		height = 0;	
}

int Box::volume()
{
		return(height * width * length);
}

int main()
{
		Box box1;
		cout << box1.volume() << endl;
		box1.change_value();
		cout << box1.volume() << endl;
		Box box2(15,30,25);
		cout << box2.volume() << endl;
		return 0;
}
