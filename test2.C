#include <sys/stat.h>

void test2(string f_path = "Grafici") {
	struct stat st;
	string path = f_path;
	if(stat(path.c_str(),&st) == 0){
  	cout<<path<<" exist!!!"<<endl;
	}
	else{
		cout<<path<<" does not exits, creating it"<<endl;
		mkdir(path.c_str(), ACCESSPERMS);
	}
}
