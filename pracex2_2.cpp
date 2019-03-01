#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
	ifstream source("score1.txt");
	string line;
	int N=20;
	while(getline(source,line)){
		float a=atof(line.c_str());
		for(int i = 1; i <= N; i++){
		for(int j = i; j > 0; j--){
			if(a[j] < a[j-1]){
				float temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
		}else{break;}
	}
}
	ofstream source("rank.txt");
		source << a << "\n"; 
}

	
	
	return 0;
}

