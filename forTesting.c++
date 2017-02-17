#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <fstream>


using namespace std;

ofstream out("/home/jezze/TestCase.txt");

int pre(int &m){
    return m+=1;
}


int post(int &n){
    int l = n;
    n += 1;
    return l;
}

void test_increment(){



    int i = 2;
    int p = pre(i);
    cout << "Pre-Increment" << endl;
    cout << "i: " << i << endl;
    cout << "p: " << p << endl << endl;

    cout << "Post-Increment" << endl;
    int j = 2;
    int k = post(j);
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;
}

void randGen(){

    vector<int> votes;
    int randNum;
    int candidates = 21;



    while(votes.size() < candidates){
        srand(time(NULL));
        randNum = rand() % candidates + 1;
        //cout << "random: " << randNum << endl;
        //cin.get();
        if(!(find(votes.begin(), votes.end(), randNum)!= votes.end()))
            votes.push_back(randNum);
    }

    for(unsigned int i = 0; i < votes.size(); i++){
        cout << votes.at(i) << " ";
        out << votes.at(i);
        if(i < votes.size()-1) out << " ";
    }
    cout << endl;
    out << "\n";
}



int main () {

    return 0;
}
