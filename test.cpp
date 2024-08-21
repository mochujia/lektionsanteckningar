#include <iostream>
#include <string>

int age = 21;







int funktion(){
    if (age<20){
        printf("You're younger than 20");
    }
    else if (age>20){
        printf("You're older than 20");
    }
}





int main(){
    printf("I am %d years old", age);
    funktion();
    return 0;

}

