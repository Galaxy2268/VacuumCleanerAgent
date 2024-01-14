#include <iostream>
#include <string>

using namespace std;


class Agent
{    

    protected:
    bool isCleaning;
    int position;
    Agent(){

    }



    public:
    virtual void clean(){

    }

    virtual void stopClean(){
        
    }

    virtual void moveRight(){

    }

    virtual void moveLeft(){

    }

    virtual void moveUp(){

    }

    virtual void moveDown(){
        
    }

    

};


class VacumCleaner : public Agent{
    private:




    public:
    VacumCleaner() : Agent(){
        this->isCleaning = false;
        this->position = 0;
    }
    
    void moveDown() override {
        cout << "VC IS movin down!\n";
        this->position--;
    }

    void moveUp() override {
        cout << "VC IS movin up!\n";
        this->position++;
    }

    void moveLeft() override {
        cout << "VC IS movin left!\n";
        this->position++;
    }

    void moveRight() override {
        cout << "VC IS movin right!\n";
        this->position++;
    }

    void clean() override {
        cout << "VC IS CleaNing!\n";
        this-> isCleaning = true;
        
    }

    void stopClean() override{
        cout << "VC Isnt CleaNing\n";
        this->isCleaning = false;
    }
        


};


int main(){



    VacumCleaner vc;


    vc.moveDown();
    vc.clean();






}