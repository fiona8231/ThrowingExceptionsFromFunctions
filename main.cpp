#include <iostream>

using namespace std;

//assuming we have a function test
void test () throw(int, char, runtime_error) {

    //throw int(5);
    //throw char ('t');
    throw runtime_error(" Run time error. ");
}
int main() {
    try{
        //function
        test();
    }catch (int error){
        cout << " Integer type " << error << endl;
    }
    catch (char c){
        cout << "Character type " << c << endl;

    }
    catch (runtime_error &error1){
        cout << "Run time error type" << error1.what() << endl;
    }
    return 0;
}