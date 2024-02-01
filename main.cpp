#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Faucet
//  action 1: Drip
faucet.drip();
//  action 2: Flow
faucet.flow();
//  action 3: Auto Shut off
faucet.autoShutOff();

//  2)
//  Noun: Camera
//  action 1: auto focus
camera.autoFocus();
//  action 2: shutter executes
camera.shutterExecute();
//  action 3: messures light 
camera.measureLight();

//  3)
//  Noun: Car
//  action 1: Idle
car.idle();
//  action 2: Accelerate
car.acceleate();
//  action 3: Stop
car.stop();

//  4)
//  Noun: Clock
//  action 1: Ticking
clock.ticking();
//  action 2: Chiming
clock.chiming();
//  action 3: Losing time
clock.losingTime();

//  5)
//  Noun: Plant
//  action 1: Grow
plant.grow();
//  action 2: Photosynthesizing
plant.photosynthesizing();
//  action 3: Wilting
plant.wilting();

//  6)
// Noun: Computer
// action 1: Boot Up
computer.bootUp();
// action 2: runs software
computer.runSoftware();
// action 3: Shut down
computer.shutDown();

//  7)
//  Noun: Cup
//  action 1: Holding liquid
cup.holdinLiquid();
//  action 2: Tipping over
cup.tippingOver();
//  action 3: Collecting condensation
cup.collectingCondensation();

//  8)
//  Noun: Ball
//  action 1: Bounce
ball.bouncing();
//  action 2: Roll
ball.rooling();
//  action 3: Deflates
ball.deflating();

//  9)
// Noun: Television
// action 1: Show a progam
television.showProgram();
// action 2: turns on
television.turnsOn();
// action 3: Adjust Volume
television.adjustVolume();

//  10)
//  Noun:Printer-fax
//  action 1: Printing
printerFax.printing();
//  action 2: Scanning
prientFax.scanning();
//  action 3: Recieviing a Fax
printFax.recievingFax();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
