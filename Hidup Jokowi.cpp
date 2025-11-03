#include <iostream>
using namespace std;

void rekursif(int);
int main(){
	rekursif(0);
}

void rekursif(int loop){
	cout << "HIDUP JOKOWI!\n";
	loop++;
	if(loop>=5){
		return;
	}else{
		rekursif(loop);
	}
}
