# StatePattern

## General establishment
1. I'm looking for the way to use State Pattern without dynamic memory allocation. It's important for compliance with MISRA standard.
2. State machine should be safe. It can't allow to change state accidentialy. 

## Program description
The passes between states are only allowed on way shown on diagram. 

![](StateMachine.png)