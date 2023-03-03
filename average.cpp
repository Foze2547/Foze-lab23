#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc <= 1) {
        cout << "Please input numbers to find average." << endl;
        return 0;
    }
    
    int sum = 0;
    for(int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        sum += num;
    }
    
    double average = (double)sum / (argc - 1);
    cout << "---------------------------------\n" << "Average of " << argc - 1 << " numbers = " << average << "\n---------------------------------" << endl;
    
    return 0;
}
