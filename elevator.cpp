#include <iostream>
#include <vector>

using namespace std;

class elevator{
    public:
        int current; 
        char dir;
        bool stop;
        vector <int> destination, call;
    
    void decide_stop(void);
    
    
};

void elevator::decide_stop(void){
    for(unsigned i=0;i!=call.size();i++){
        if(call.at(i) == current) {
            stop = true;
            call.erase(call.begin() + i);
            cout << "Stopped at: " << i << " destination" << endl;
        }
            
    }
    for(unsigned j=0;j!=destination.size();j++){
        if(destination.at(j) == current) {
            stop = true;
            destination.erase(destination.begin() + j);
            cout << "Stopped at: " << j << " called" << endl;
        }
    }
    
    if(current == 0) {
        stop = true;
    }
    }

int main()
{
   cout << "Hello World" << endl; 
   int count = 0;
   int dst;
   elevator e;
   
   while (count!=10) {
       
       e.decide_stop();
       
       if(e.stop) {
        cout <<"Enter destination" << endl;
        cin >> dst;
        e.destination.push_back(dst);
        //Customer presses a button in elevator
       }
       
       
       
       
       count++;
   }
   
   return 0;
}