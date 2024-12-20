#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    ifstream sr;
    sr.open("score.txt");
    double sum,Avg,sum1 = 0;
    int count = 0;
    string tl;
    while(getline(sr,tl)){
        sum += atof(tl.c_str());
        sum1 += pow(atof(tl.c_str()),2);
        count++;
    }
    Avg = sum/count;
    double Sd = sqrt((sum1/count)-pow(Avg,2));
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< Avg<<"\n";
    cout << "Standard deviation = "<< Sd;
}