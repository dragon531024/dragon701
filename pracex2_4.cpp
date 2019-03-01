#include <iostream>
#include <cmath>

using namespace std;

double av(double ,double );

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

double av(double x,double y){
	double maxXY,minXY;
	if(x>y){maxXY=x,minXY=y;}
	else if(y>x){maxXY=y,minXY=x;}
	if(x<=0 or y<=0){
		return 0;
	}else if(maxXY/minXY<=100){
		return pow(x*y,0.5);
	}else{
		return av(x,(x+y)/2)+av(y,(x+y)/2);
	}
}
