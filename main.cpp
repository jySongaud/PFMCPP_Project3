/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Playlist
{
    int numMusic = 20;
    bool state = 1;
    char playMode = 'A';

    struct Music
    {
        int orderOfTheMusic = 5;
        float lengthOfTimeOfTheMusic = 3.55f;
    
    };

    void informationOfMusic( Music music );

    Music lastestAddedMusic;
};
/*
 2)
 */
struct Shoppingcart
{
    int numItems = 3;
    float weightItems = 6.99f;

    struct Item
    {
        float priceOfItem = 4.67f;
        bool inStock = 1;
    };
    void statusOfItem( Item item );

    Item toiletPaper;


};
/*
 3)
 */
struct Plan
{
    int numTodo = 5;
    int numDateOfTheYear = 156;

    struct Todo
    {
        float timeNeeded = 3.50f;
        bool completed = 0;
    };
    void statusOfTodo( Todo todo);

    Todo quarantine;

};
/*
 4)
 */

struct OnlineCourse
{
    int numChapter = 16;
    float timeOfCourse = 8.00f;

    struct Assignment
    {
        int numRequirement = 5;
        int dueDate = 135;
    };
    void infoAssignment( Assignment assignement);

    Assignment buildABluePrint;
};
/*
 5)
 */
struct Attendence
{
    struct SumAttendence
    {
        int numStudent = 16;
        int todayStudent = 14;
        float percentageAttendence = 0.875f;
    };

    struct Student
    {
        float quiz =9.67f;
        int numWorkstation = 14;

    };
    void infoStudent( Student student);

    Student Amanda;
};
/*
 6)
 */
struct AC
{
    bool off = 0;

    struct ModeForCool
    {
        float currentTemperature = 79.0f;
        float setTemperature = 74.5f;
        bool cool = 1;
    };
    void autoControlCool( ModeForCool modeForCool);

    ModeForCool exceed745;
};
/*
 7)
 */
struct Shortcuts
{
    char brandKeyboard = 'A';
    char typeKeyboard = 'C';

    struct Function
    {
        int howManyKeyToTap = 3;
        bool tapAllAtOnce = 1;
    };
    void searchShortcutForFunction( Function function);
    Function shuttle;
};
/*
 8)
 */
struct BusService
{
    int numRoutes = 5;


    struct Stop
    {
        int numRoutesHaveThisStop = 2;
        char TypeRoute1 = 'A';
        char TypeRoute2 = 'F';
    };
    void theClosestStop(Stop stop);
    Stop BoulderSt;
};
/*
 9)
 */
struct Recipe
{
    int numDishesForDinner = 4;

    struct Dish
    {
        int numVegetables = 3;
        int numMeat = 1;
        int numFruits = 0;
    };

    void IngredientsForADish( Dish dish);
    Dish SichuanFishwithPickledMustardGreens;
};
/*
 10)
 */
 struct Printer
 {
     float volumeOfInk = 0.44f;
     int numPaperCanBePrinted = 380;

     struct Task
     {
         int numFile = 2;
         int numPages = 4;
     };
     void statusQuene( Task task);
     Task brotherHL2390;
 };
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
