(hn,horses#include <random>)



 coin = dist(rd);

 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

cout int NUM_HORSES = 5;
cout int RACE_LENGTH = 15;

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int main(){
//make a num list for the horses
//make a while loop
//run all funtions
int horses[] = {0,0,0,0,0};
bool keepGoing = true

	
while (keepGoing){
   
	
   for (int hn = 0; hn < NUM_HORSES; hn++){
     advance(hn, horses);
     printLane(hn, horses);
     if (isWinner(hn, horses)){
       keepGoing = false;
     } // end if
   } // end for

  std::cout << "Press enter for another turn.";
  std::cin.ingnore();
} // end while


return 0;
void advance(){
//coin needs to be a 50/50 on if the horse moves
//it needs to flip the coin for each horse and move the forward or keep them where its at
//i could use a random number gen and if its over 50 move it forward and if its below 50 keep it there



void printLane(){
//needs to print the rows with dots and the horses numbers
//it needs to also have a Press enter to make next turn 



bool isWinner(){
//horse needs to be swaped into the final spot and then have a message that that horse won.
//it could just be similar to the Number sort we did last week

std::uniform_int_distribution<int> dist(1,100);


        correct = dist(rd);

        std::cout << "Correct: " << correct << std::endl;

        while (keepGoing){
                turns++;
                std::cout << turns << ")Please enter a number: ";
                std::cin >> guess;


