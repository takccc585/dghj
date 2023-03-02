#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class PC {
	string prc;
	string videoc;
	int gpu;
public:
	PC() {
		prc = " ";
		videoc = " ";
		gpu = 0;
	}
	PC(string fprc, string fvideoc, int fgpu) {
		prc = fprc;
		videoc = fvideoc;
		gpu = fgpu;
	}
	string getprc() { return prc; }
	void setgpu(int fgpu) { gpu = fgpu; }
	string getvideoc() { return videoc; }
	int getgpu() { return gpu; }
	void print() {
		cout << "Processor:" << prc << endl;
		cout << "GPU: " << gpu << endl;
		cout << "videocard: " << videoc << endl;
	}
};
int main() {
	srand(time(0));
	vector <PC> vec(10);
	string prc[3] = { "Core","AMD","ARM" };
	string videoc[3] = { "gtx","rtx","rx" };
	for (int i = 0; i <= 10; i++) {
		int pr_ind = rand() % 3;
		int videoc_ind = rand() % 3;
		int gpu_ind = rand() % 10;
		PC c1(prc[pr_ind], videoc[videoc_ind]);

	}
	return 0;
}